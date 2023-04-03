#include <genesis.h>
#include "resources.h"


static u16 palette[32];
const u16 palette_flash[32] =
{
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,

    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,

    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,

    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE,
    0x0EEE
};
static u8 flashScreen = 0;
static bool useFlash = FALSE;





u16 crosshairsMode = 0; // 0 raw values, 1 with lookup,  2 with lookup and calibration offset
static bool calibrateMode = FALSE;
#define MAX_VALS 10
static fix32 xValues[MAX_VALS];
static fix32 yValues[MAX_VALS];
static u16 currentValue = 0;

static fix32 xOffset = FIX32(0);
static fix32 yOffset = FIX32(0);

static fix32 xLookup[256]; // full range for JOY_readJoypadX()

static void calculateOffset()
{
	fix32 xTemp = FIX32(0);
	fix32 yTemp = FIX32(0);
	// get average X and Y
	for (int i = 0; i < currentValue; ++i)
	{
		xTemp = fix32Add(xTemp, xValues[i]);
		yTemp = fix32Add(yTemp, yValues[i]);
	}
	xTemp = fix32Div(xTemp, FIX32(currentValue));
	yTemp = fix32Div(yTemp, FIX32(currentValue));

	// center should be 160, 112
	xOffset = FIX32(160) - xTemp;
	yOffset = FIX32(112) - yTemp;
}

static void joypadHandler(u16 joypadId, u16 changed, u16 joypadState)
{

	// standard controller handles modes
	if (joypadId == JOY_1)
	{
		if (joypadState & BUTTON_B)
		{
			currentValue = 0;
			calibrateMode = TRUE;
		}
		else if (joypadState & BUTTON_C)
		{
			++crosshairsMode;
			if (crosshairsMode > 2)
			{
				crosshairsMode = 0;
			}
		} else if( joypadState & BUTTON_Z ) {
		  // Z - Toggle screen flash
			useFlash = !useFlash;
		}		
	}
	else if (joypadId == JOY_2)
	{

		// A
		if (joypadState & BUTTON_A)
		{
			flashScreen = 3;
			if (calibrateMode)
			{
				// get reading
				s16 xVal = JOY_readJoypadX(JOY_2);
				s16 yVal = JOY_readJoypadY(JOY_2);
				// store values for calculation
				if (currentValue < MAX_VALS)
				{
					xValues[currentValue] = xLookup[xVal];
					yValues[currentValue] = FIX32(yVal);
					++currentValue;
				}
				if (currentValue == MAX_VALS)
				{
					calculateOffset();
					currentValue = 0;
					calibrateMode = FALSE;
				}
			}
		}
	}
}

static void calculateXLookup()
{
	// My SMS Phaser appears to return 30 through 180 when I pan
	// across my TV screen in H32 mode.   so about 150 values over 320 pixels
	fix32 pos = FIX32(0);
	for (int i = 30; i < 180; ++i)
	{
		xLookup[i] = pos;
		pos = fix32Add(pos, FIX32(2.13333));
	}
}

int main(bool hard)
{

	///////////////////////////////////////////////////////////////////////////////////
	// Sprite Setup
	Sprite *targetSprite = NULL;
	PAL_setPalette(PAL1, target_pal.data, CPU);
	SPR_init();

	// crosshair is 16x16
	Sprite *crosshairsSprite = NULL;
	fix32 crosshairsPosX = FIX32(152.0);
	fix32 crosshairsPosY = FIX32(104.0);
	crosshairsSprite = SPR_addSprite(&crosshairs,								 // Sprite defined in resources
																	 fix32ToInt(crosshairsPosX), // starting X position
																	 fix32ToInt(crosshairsPosY), // starting Y position
																	 TILE_ATTR(PAL1,						 // specify palette
																						 1,								 // Tile priority ( with background)
																						 FALSE,						 // flip the sprite vertically?
																						 FALSE						 // flip the sprite horizontally
																						 ));

	// set target in the center position (target is 32x32 )
	fix32 targetPosX = FIX32(144.0); // 160 - 16 = 144
	fix32 targetPosY = FIX32(96.0);	 // 112 - 16 = 96

	targetSprite = SPR_addSprite(&target,								 // Sprite defined in resource.res
															 fix32ToInt(targetPosX), // starting X position
															 fix32ToInt(targetPosY), // starting Y position
															 TILE_ATTR(PAL1,				 // specify palette
																				 1,						 // Tile priority ( with background)
																				 FALSE,				 // flip the sprite vertically?
																				 FALSE				 // flip the sprite horizontally
																				 ));

	///////////////////////////////////////////////////////////////////////////////////
	// Color Setup
	// Set background brighter than 0.	darker backgrounds
	// prevent Phaser from returning X, Y values.
	PAL_setColor(15, 0x0000);
	VDP_setTextPalette(0);
	PAL_setColor(0, RGB24_TO_VDPCOLOR(0x44aaff)); // seems to work OK
	PAL_getColors( 0, &palette[0], 16);
	memcpy(&palette[16], target_pal.data, 16 * 2);

	///////////////////////////////////////////////////////////////////////////////////
	// Phaser Setup
	//
	calculateXLookup();


	// Asynchronous joystick handler.
	JOY_setEventHandler(joypadHandler);

	// Can't check for phaser with JOY_getPortType().  Just assume we've got a Phaser attached
	JOY_setSupport(PORT_2, JOY_SUPPORT_PHASER);


	///////////////////////////////////////////////////////////////////////////////////
	// Draw text
	VDP_drawText("Press C to change drawing mode", 5, 5);
	char message[40];
	// use intToStr() to print row numbers
	for( s32 i=0; i < 28; ++i ) {
		intToStr( i, message, 1 );
		VDP_drawText( message, 0, i );
	}

	// use uintToStr() to print column numbers
	for( u32 i=0; i < 40; ++i ) {
		u32 tmp = i%10;
		uintToStr( tmp, message, 1 );
		// draw ones place
		VDP_drawText( message, i, 0 );
		// draw tens place
		if( i > 0 ) {
			if( tmp == 0 ) {
				uintToStr( i/10, message, 1 );
				VDP_drawText( message, i, 1 );
			}
		}
	}


	///////////////////////////////////////////////////////////////////////////////////
	// Main Loop!
	while (TRUE)
	{

		if ( useFlash && flashScreen > 0)
		{
			if (flashScreen == 3)
			{
				PAL_setColors(0, palette_flash, 32, CPU);
			}
			else if (flashScreen == 1)
			{
				PAL_setColors(0, palette, 32, CPU);
			}
			--flashScreen;
		}

		// get the button states
		u16 value = JOY_readJoypad(JOY_2);
		if (value & BUTTON_A)
		{
			VDP_drawText("A", 18, 9);
		}
		else
		{
			VDP_drawText(" ", 18, 9);
		}

		// My Phaser appears to return ????
		// H32 mode.
		//
		// if both values are -1, the gun is aiming off screen.
		s16 xVal = JOY_readJoypadX(JOY_2);
		s16 yVal = JOY_readJoypadY(JOY_2);
		char message[40];
		sprintf(message, "Phaser Values x:%d, y:%d      ", xVal, yVal);
		VDP_drawText(message, 7, 7);
		sprintf( message, "Offset Values x:%ld, y:%ld         ", fix32ToInt(xOffset),fix32ToInt( yOffset) );
		VDP_drawText(message, 7, 10);
		if (calibrateMode)
		{
			VDP_drawText("Aim at target and pull trigger", 5, 3);
		}
		else
		{
			VDP_drawText("Press B to start calibration  ", 5, 3);
		}

		// set crosshairs position. Subtract 8 from each to compensate for 16x16 sprite
		switch (crosshairsMode)
		{
		case 0: // raw
			VDP_drawText("   Render raw joypad values   ", 5, 5);
			crosshairsPosX = fix32Mul(FIX32(xVal), FIX32(2.52));
			crosshairsPosY = FIX32(yVal - 8);
			break;
		case 1: // with lookup
			VDP_drawText("   Render with lookup table   ", 5, 5);
			crosshairsPosX = fix32Sub(xLookup[xVal], FIX32(8));
			crosshairsPosY = fix32Sub(FIX32(yVal), FIX32(8));
			break;
		case 2: // with lookup + offset
			VDP_drawText("  Render with lookup + offset ", 5, 5);
			crosshairsPosX = fix32Sub(fix32Add(xLookup[xVal], xOffset), FIX32(8));
			crosshairsPosY = fix32Sub(fix32Add(FIX32(yVal), yOffset), FIX32(8));
		default:
			break;
		}

		// Set the Sprite Positions.
		// SPR_setPosition( targetSprite, fix32ToInt( targetPosX ), fix32ToInt( targetPosY ) );
		SPR_setPosition(crosshairsSprite, fix32ToInt(crosshairsPosX), fix32ToInt(crosshairsPosY));
		SPR_update();

		SYS_doVBlankProcess(); // 1.65 is linking
	}
}
