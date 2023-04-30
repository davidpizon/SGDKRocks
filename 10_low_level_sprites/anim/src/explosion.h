#include <genesis.h>

const u32 explosion_tiles[] = {
  //start animation row: 0
  //start animation frame: 0
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000001,
  0x00000002,
  0x00000024,
  0x00000024,

  0x00000043,
  0x00000023,
  0x00000023,
  0x00020145,
  0x00001435,
  0x00002355,
  0x00014555,
  0x00013558,

  0x00016588,
  0x00015588,
  0x00013558,
  0x00046555,
  0x00043555,
  0x00012355,
  0x00001455,
  0x00000455,

  0x00000235,
  0x00000243,
  0x00000012,
  0x00000002,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00010000,
  0x24334434,
  0x45555655,
  0x65555555,
  0x55555555,

  0x55555556,
  0x55555556,
  0x55555556,
  0x55555555,
  0x66555555,
  0x55555555,
  0x85555555,
  0x85555555,

  0x88555555,
  0x88555555,
  0x85555555,
  0x85555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,

  0x55555655,
  0x55663446,
  0x44424123,
  0x44210000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x30000000,
  0x00000000,
  0x42200000,
  0x53410000,
  0x55640000,

  0x55564100,
  0x65556210,
  0x55555422,
  0x56655632,
  0x53366663,
  0x55655555,
  0x55555555,
  0x55555555,

  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55556424,
  0x55554211,

  0x55641000,
  0x34420000,
  0x30000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x41000000,
  0x64210000,
  0x55410000,
  0x55320000,

  0x55410000,
  0x55420000,
  0x55640000,
  0x55340000,
  0x56420000,
  0x34220000,
  0x42000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 1
  0x00000000,
  0x00000001,
  0x00000001,
  0x00000022,
  0x00000023,
  0x00000126,
  0x00000246,
  0x00000123,

  0x00000143,
  0x00000235,
  0x00000455,
  0x00001235,
  0x00014365,
  0x00246555,
  0x02235555,
  0x02455558,

  0x02355588,
  0x04655888,
  0x02355888,
  0x02455888,
  0x01465588,
  0x00435558,
  0x00146555,
  0x00023555,

  0x00023555,
  0x00024555,
  0x00004355,
  0x00002435,
  0x00000143,
  0x00000001,
  0x00000001,
  0x00000000,

  0x00110000,
  0x12222122,
  0x23334444,
  0x35556363,
  0x55555666,
  0x55555663,
  0x55555564,
  0x36555563,

  0x36555563,
  0x55555564,
  0x56555564,
  0x55555563,
  0x66655566,
  0x56665556,
  0x55555556,
  0x85555555,

  0x55555555,
  0x85555555,
  0x85555555,
  0x85555555,
  0x85555555,
  0x88555555,
  0x55555555,
  0x55555555,

  0x55555555,
  0x55555665,
  0x55555446,
  0x55564222,
  0x66321000,
  0x44210000,
  0x11100000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x10000000,
  0x42100000,
  0x63200000,
  0x35321000,
  0x35534100,
  0x35556410,

  0x65555322,
  0x35555644,
  0x45555532,
  0x35556642,
  0x36663344,
  0x65553422,
  0x55556342,
  0x55555532,

  0x55555564,
  0x55555556,
  0x55555556,
  0x55555663,
  0x55563366,
  0x55556636,
  0x55555563,
  0x55555532,

  0x55555321,
  0x55553420,
  0x34344210,
  0x22220000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x12100000,
  0x44100000,
  0x43341020,
  0x35534200,
  0x46553200,
  0x43555400,

  0x36555400,
  0x36556200,
  0x66556200,
  0x66556200,
  0x66554100,
  0x55532000,
  0x66422000,
  0x22210000,

  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 2
  0x00000000,
  0x00000011,
  0x00000022,
  0x00000024,
  0x00000023,
  0x00000123,
  0x00000123,
  0x00000124,

  0x00000143,
  0x00000236,
  0x00000465,
  0x00001236,
  0x00014433,
  0x00123366,
  0x01236655,
  0x02366655,

  0x14556688,
  0x13555588,
  0x14656888,
  0x01355888,
  0x01355888,
  0x01355588,
  0x02465585,
  0x02235555,

  0x00143555,
  0x00014655,
  0x00014656,
  0x00002455,
  0x00001235,
  0x00000143,
  0x00000112,
  0x00000000,

  0x01222100,
  0x22442222,
  0x43664444,
  0x66666333,
  0x66643333,
  0x36633344,
  0x33365632,
  0x34655542,

  0x33555534,
  0x65555534,
  0x56555564,
  0x66555564,
  0x33655534,
  0x33666663,
  0x66566553,
  0x55555566,

  0x85556666,
  0x55556666,
  0x85556655,
  0x85555555,
  0x85555555,
  0x55555555,
  0x85566666,
  0x55566665,

  0x55556656,
  0x55555636,
  0x66555443,
  0x55553222,
  0x55532100,
  0x63322000,
  0x22211000,
  0x11000000,

  0x00000000,
  0x10000000,
  0x10000000,
  0x42100000,
  0x36410000,
  0x45642000,
  0x26564200,
  0x46555410,

  0x36365642,
  0x45536534,
  0x45555632,
  0x45566642,
  0x43333342,
  0x33333422,
  0x66363342,
  0x66666632,

  0x55566664,
  0x55566663,
  0x65666633,
  0x56666344,
  0x55534424,
  0x55564444,
  0x55563664,
  0x66666564,

  0x66665532,
  0x65555341,
  0x44663220,
  0x22222200,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x11000000,
  0x22110000,
  0x24442100,
  0x44664210,
  0x24365420,
  0x24365640,

  0x44365640,
  0x34365320,
  0x44436320,
  0x44466420,
  0x44363210,
  0x33634100,
  0x33422000,
  0x22210000,

  0x11000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 3
  0x00000000,
  0x00000001,
  0x00000022,
  0x00000024,
  0x00000123,
  0x00000124,
  0x00000124,
  0x00000124,

  0x00000143,
  0x00000433,
  0x00000466,
  0x00001433,
  0x00012444,
  0x00124222,
  0x01244422,
  0x14344422,

  0x13633444,
  0x13663333,
  0x14363633,
  0x14366666,
  0x13666686,
  0x13666866,
  0x14656886,
  0x02355666,

  0x00435566,
  0x00143666,
  0x00024366,
  0x00002466,
  0x00001236,
  0x00000243,
  0x00000124,
  0x00000012,

  0x11222110,
  0x22442121,
  0x44334222,
  0x33444422,
  0x44444222,
  0x44433422,
  0x44365342,
  0x44655542,

  0x33555542,
  0x66555542,
  0x63655542,
  0x63655534,
  0x44365534,
  0x44336634,
  0x43666664,
  0x46556664,

  0x35556333,
  0x66553333,
  0x66566663,
  0x66666666,
  0x66656666,
  0x33666666,
  0x33333333,
  0x66633333,

  0x66633333,
  0x66666333,
  0x66663443,
  0x66634212,
  0x66634100,
  0x66342000,
  0x44421000,
  0x22210000,

  0x00000000,
  0x00000000,
  0x21000000,
  0x44100000,
  0x46420000,
  0x26634200,
  0x23553410,
  0x23365341,

  0x24435532,
  0x23336532,
  0x23633632,
  0x24336342,
  0x24443442,
  0x44424221,
  0x43444421,
  0x33333342,

  0x36333342,
  0x36333344,
  0x33334344,
  0x33444444,
  0x36344421,
  0x66634342,
  0x65634664,
  0x66333653,

  0x63343564,
  0x36336532,
  0x44366342,
  0x22222220,
  0x00010000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x11000000,
  0x11110000,
  0x22242102,
  0x24434420,
  0x12436340,
  0x12446641,

  0x22443641,
  0x44443340,
  0x22244220,
  0x21244210,
  0x11244100,
  0x11442100,
  0x22222000,
  0x21111000,

  0x21100000,
  0x20000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 4
  0x00000000,
  0x00000001,
  0x00000012,
  0x00000014,
  0x00000124,
  0x00000122,
  0x00000122,
  0x00000114,

  0x00000123,
  0x00000243,
  0x00000434,
  0x00000444,
  0x00011442,
  0x00122112,
  0x01221112,
  0x14421122,

  0x13344222,
  0x13334224,
  0x14443344,
  0x12433333,
  0x14433333,
  0x24433344,
  0x24333344,
  0x14333344,

  0x12433334,
  0x01433333,
  0x00243333,
  0x00022443,
  0x00001244,
  0x00000124,
  0x00000012,
  0x00000002,

  0x00000000,
  0x22100000,
  0x22110001,
  0x42111111,
  0x22112111,
  0x22243421,
  0x22433422,
  0x44366342,

  0x33366642,
  0x66666642,
  0x33655642,
  0x44366642,
  0x44436344,
  0x24333344,
  0x43333332,
  0x43363332,

  0x46666342,
  0x46663342,
  0x43633444,
  0x44333344,
  0x33333334,
  0x44333344,
  0x44444444,
  0x44444444,

  0x43344444,
  0x33333444,
  0x33334424,
  0x33344212,
  0x44442100,
  0x43442000,
  0x44221000,
  0x22210000,

  0x00000000,
  0x00000000,
  0x22100000,
  0x44200000,
  0x43421000,
  0x23634200,
  0x24666420,
  0x24336641,

  0x11246632,
  0x11143342,
  0x11124342,
  0x21124441,
  0x22124442,
  0x24112221,
  0x24111111,
  0x141e0001,

  0x14100000,
  0x241e000e,
  0x2111e0e1,
  0x42211122,
  0x44442211,
  0x43644322,
  0x36634664,
  0x33444663,

  0x44424363,
  0x44423634,
  0x42443342,
  0x21222221,
  0x00111000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x10000000,
  0x00000000,
  0x11100000,
  0x21111002,
  0x11122220,
  0x11124420,
  0x11124441,

  0x11114441,
  0x21114421,
  0x11111228,
  0x10001111,
  0x1e000110,
  0x111e0110,
  0x22111100,
  0x21111100,

  0x41100000,
  0x20000000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 5
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000001,
  0x00000012,
  0x00000014,

  0x00000014,
  0x00000014,
  0x00000012,
  0x00000122,
  0x00001122,
  0x00111112,
  0x00111112,
  0x02211112,

  0x12222112,
  0x14422122,
  0x12222222,
  0x81222221,
  0x11222211,
  0x11222211,
  0x21111111,
  0x22211111,

  0x11222111,
  0x01242211,
  0x00224422,
  0x00122444,
  0x00001111,
  0x00000001,
  0x00000001,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000011,
  0x00001111,
  0x00111111,
  0x11122211,
  0x21222211,
  0x42244211,

  0x34444421,
  0x33433421,
  0x44433321,
  0x22433442,
  0x22444442,
  0x24334442,
  0x43333222,
  0x43333212,

  0x43363211,
  0x43634211,
  0x24342211,
  0x22421111,
  0x11111111,
  0x1111e111,
  0x111ee112,
  0x11111222,

  0x12212222,
  0x12222224,
  0x22222224,
  0x22222112,
  0x11111100,
  0x11111100,
  0x11100000,
  0x11000000,

  0x00000000,
  0x00000000,
  0x11000000,
  0x22200000,
  0x24421000,
  0x24444200,
  0x14333420,
  0x14443341,

  0x11243342,
  0x11124442,
  0x11112442,
  0x11111241,
  0x11111121,
  0x11100110,
  0x11000010,
  0x11000000,

  0x11000000,
  0x11000000,
  0x11000000,
  0x1111e100,
  0x12422211,
  0x24344421,
  0x43344632,
  0x44424334,

  0x42114363,
  0x41114334,
  0x21114332,
  0x21124422,
  0x00e12211,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000010,
  0x00000110,
  0x00001120,
  0x00000110,
  0x10000000,
  0x21000000,
  0x21000000,

  0x41000000,
  0x20000000,
  0x20000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 6
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000001,

  0x00000011,
  0x00000011,
  0x00000111,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x01100000,

  0x22111000,
  0x22110000,
  0x11110000,
  0x11110000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x01100000,
  0x01110000,
  0x02212000,
  0x10024400,
  0x00002400,
  0x00000400,

  0x00000400,
  0x00000400,
  0x00000020,
  0x00000001,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation row: 1
  //start animation frame: 0
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000002,
  0x00000024,
  0x00000043,

  0x00000135,
  0x00000235,
  0x00000235,
  0x00000043,
  0x00000143,
  0x00000235,
  0x00000435,
  0x00002355,

  0x00014355,
  0x00014355,
  0x00001435,
  0x00001435,
  0x00000435,
  0x00000245,
  0x00000124,
  0x00000004,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00002212,
  0x00014344,
  0x22224555,
  0x43355555,
  0x55555555,
  0x55555555,

  0x55885555,
  0x58888555,
  0x58888555,
  0x55885555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,

  0x55555553,
  0x55555555,
  0x85555555,
  0x88855555,
  0x88885555,
  0x88885555,
  0x58855555,
  0x35555555,

  0x24335555,
  0x00143555,
  0x00024555,
  0x00000111,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x22222000,
  0x34334200,
  0x55555300,
  0x55555322,
  0x55555534,
  0x55555555,

  0x55555555,
  0x55555533,
  0x55555535,
  0x55555535,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,

  0x55555555,
  0x55555555,
  0x55555555,
  0x53555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,

  0x55555553,
  0x53355542,
  0x32121100,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x20000000,
  0x32000000,

  0x53100000,
  0x53200000,
  0x55340000,
  0x55532000,
  0x55553200,
  0x55555400,
  0x55555300,
  0x53334200,

  0x53440000,
  0x34100000,
  0x53400000,
  0x55310000,
  0x55310000,
  0x55400000,
  0x34200000,
  0x20000000,

  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 1
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000002,
  0x00000124,
  0x00001435,
  0x00002355,
  0x00014358,

  0x00013558,
  0x00013558,
  0x00012355,
  0x00001235,
  0x00000235,
  0x00002355,
  0x00023555,
  0x00135555,

  0x00023555,
  0x00024355,
  0x00024555,
  0x00135555,
  0x00135555,
  0x00143558,
  0x00024555,
  0x00001355,

  0x00000435,
  0x00000235,
  0x00000124,
  0x00000001,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00002012,
  0x00244443,
  0x12435335,
  0x33555333,
  0x55555533,
  0x88555553,
  0x88855555,

  0x88855553,
  0x88855555,
  0x88555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55555555,

  0x55555555,
  0x55555533,
  0x55555333,
  0x55555535,
  0x85555555,
  0x88855555,
  0x88885555,
  0x88885555,

  0x58855555,
  0x55555555,
  0x35335555,
  0x24435555,
  0x00235555,
  0x00023554,
  0x00001221,
  0x00000000,

  0x01111000,
  0x24334200,
  0x55553420,
  0x55553340,
  0x53333341,
  0x34433334,
  0x33355334,
  0x33555334,

  0x35555534,
  0x55555544,
  0x55555343,
  0x55555344,
  0x55555534,
  0x55555553,
  0x55555553,
  0x55555555,

  0x55555555,
  0x35555555,
  0x35555555,
  0x55555555,
  0x55555555,
  0x55555555,
  0x55553555,
  0x53355555,

  0x55555555,
  0x55555555,
  0x55555555,
  0x34344353,
  0x42001121,
  0x20000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x21000000,
  0x42100000,
  0x44200000,

  0x44410000,
  0x33324210,
  0x55333420,
  0x35555342,
  0x35555532,
  0x35553534,
  0x35533534,
  0x55333442,

  0x55342200,
  0x55320000,
  0x55534000,
  0x55554100,
  0x55553400,
  0x55553200,
  0x55534000,
  0x55341000,

  0x55420000,
  0x53210000,
  0x34100000,
  0x41000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 2
  0x00000000,
  0x00000000,
  0x00000001,
  0x00000122,
  0x00001235,
  0x00012358,
  0x00013588,
  0x00023588,

  0x00023558,
  0x00023555,
  0x00012333,
  0x00001245,
  0x00000235,
  0x10012355,
  0x10145555,
  0x00435555,

  0x00145555,
  0x00024355,
  0x00124355,
  0x00233555,
  0x00435585,
  0x00235558,
  0x00143588,
  0x00014588,

  0x00014558,
  0x00004355,
  0x00001455,
  0x00000243,
  0x00000012,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000001,
  0x00022214,
  0x02243443,
  0x24353443,
  0x55553344,
  0x85553333,
  0x88553333,
  0x88555553,

  0x85555533,
  0x58555334,
  0x55555543,
  0x55555324,
  0x53335424,
  0x34335423,
  0x34355343,
  0x33555535,

  0x55555333,
  0x55553334,
  0x55555344,
  0x55555533,
  0x55555555,
  0x85555555,
  0x88555555,
  0x88535555,

  0x85835555,
  0x55555555,
  0x55555555,
  0x53443555,
  0x22243555,
  0x00143555,
  0x00024334,
  0x00000111,

  0x01211000,
  0x44442210,
  0x54224420,
  0x34224441,
  0x42224442,
  0x42443433,
  0x43334424,
  0x43553444,

  0x43555344,
  0x33333344,
  0x33333343,
  0x33333444,
  0x33333344,
  0x33334444,
  0x53333333,
  0x53333333,

  0x33333333,
  0x33333533,
  0x33333533,
  0x33533335,
  0x55553353,
  0x55553535,
  0x55533355,
  0x53333555,

  0x53335555,
  0x53333335,
  0x55553443,
  0x53334243,
  0x34221111,
  0x42000000,
  0x20000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x21000000,
  0x42100000,
  0x44200000,
  0x44410000,

  0x44420200,
  0x43422220,
  0x35344421,
  0x43333342,
  0x43534342,
  0x43553422,
  0x35533222,
  0x33442221,

  0x33342110,
  0x53342000,
  0x55554210,
  0x35555420,
  0x55555440,
  0x55555420,
  0x55555410,
  0x55553400,

  0x55534100,
  0x55421000,
  0x34210000,
  0x42100000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 3
  0x00000000,
  0x00000000,
  0x00000011,
  0x00000244,
  0x00002333,
  0x00024335,
  0x00023338,
  0x00043535,

  0x00043333,
  0x00023333,
  0x00002433,
  0x00000133,
  0x00000233,
  0x10022433,
  0x10235533,
  0x00455554,

  0x00235333,
  0x00024355,
  0x00024335,
  0x00144335,
  0x00143355,
  0x00143335,
  0x00143333,
  0x00023533,

  0x00043553,
  0x00023585,
  0x00014558,
  0x00002355,
  0x00000243,
  0x00000011,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00222211,
  0x12433422,
  0x43334242,
  0x35334224,
  0x55533444,
  0x85533343,
  0x55333334,

  0x53353344,
  0x33353342,
  0x33555344,
  0x55335422,
  0x33443214,
  0x42243424,
  0x44433343,
  0x43333343,

  0x33333343,
  0x53344444,
  0x55333442,
  0x55555344,
  0x55553333,
  0x55553333,
  0x55333335,
  0x33333355,

  0x33443355,
  0x33333355,
  0x53333335,
  0x53333333,
  0x34223333,
  0x11023333,
  0x00024333,
  0x00012442,

  0x00000000,
  0x10000000,
  0x11000000,
  0x11110011,
  0x22221122,
  0x22222243,
  0x24342122,
  0x24332222,

  0x24334222,
  0x24442124,
  0x44421124,
  0x24421112,
  0x22421112,
  0x42442112,
  0x33442224,
  0x33344444,

  0x44422244,
  0x44441114,
  0x24442114,
  0x44342243,
  0x33334433,
  0x33334333,
  0x33342343,
  0x53344333,

  0x53444333,
  0x54433443,
  0x33334222,
  0x33342111,
  0x34221011,
  0x42000000,
  0x22000000,
  0x10000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x22100000,
  0x34210000,
  0x24220000,
  0x24220000,

  0x24421100,
  0x44421110,
  0x33342110,
  0x44334211,
  0x24334211,
  0x24334211,
  0x43334221,
  0x44222211,

  0x44211100,
  0x33422200,
  0x33333220,
  0x33355321,
  0x33555542,
  0x35555542,
  0x35555542,
  0x55555321,

  0x55555420,
  0x55534210,
  0x44421000,
  0x11100000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 4
  0x00000000,
  0x00000000,
  0x00000200,
  0x00001211,
  0x00002421,
  0x00012421,
  0x00012421,
  0x00012421,

  0x00012421,
  0x00011222,
  0x00001122,
  0x00000124,
  0x00012122,
  0x10422422,
  0x1023342e,
  0x01433421,

  0x00233444,
  0x00122444,
  0x00012444,
  0x00112243,
  0x00111233,
  0x00112443,
  0x00012244,
  0x00024442,

  0x00124442,
  0x00124444,
  0x00023333,
  0x00024333,
  0x00012433,
  0x00000222,
  0x00000000,
  0x00000000,

  0x00000000,
  0x01222200,
  0x02444210,
  0x12222111,
  0x14421110,
  0x12421100,
  0x11211100,
  0x11114210,

  0x11224411,
  0x22243321,
  0x33443321,
  0x33443411,
  0x44224211,
  0x11112111,
  0x1e111112,
  0xe1112222,

  0x42224114,
  0x44422112,
  0x44444222,
  0x34333222,
  0x33344222,
  0x33334244,
  0x33434443,
  0x22243433,

  0x22124433,
  0x44122233,
  0x44222243,
  0x34223212,
  0x42124212,
  0x21022222,
  0x00002242,
  0x00002222,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000012,
  0x00000112,
  0x00000122,
  0x00000111,
  0x00000111,

  0x11001111,
  0x11111122,
  0x11211122,
  0x11211112,
  0x11111111,
  0x11111111,
  0x22111111,
  0x44211122,

  0x22211122,
  0x11221112,
  0x11221111,
  0x22121111,
  0x44211111,
  0x44211111,
  0x42111111,
  0x32111112,

  0x34211112,
  0x34211112,
  0x34221111,
  0x34421111,
  0x42110000,
  0x21000000,
  0x22000000,
  0x21000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x20000000,
  0x22200000,
  0x22200000,
  0x12220000,
  0x12210000,

  0x12211000,
  0x22211100,
  0x43421100,
  0x42442110,
  0x12244211,
  0x12411111,
  0x22411111,
  0x22111110,

  0x11111000,
  0x11111100,
  0x11222220,
  0x11244421,
  0x12443342,
  0x24443332,
  0x24433332,
  0x43333342,

  0x43333341,
  0x43333420,
  0x24442200,
  0x11110000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 5
  0x00000000,
  0x00000000,
  0x00000000,
  0x00001000,
  0x00001100,
  0x00011110,
  0x00011111,
  0x00011111,

  0x00011111,
  0x00011111,
  0x00000012,
  0x00000112,
  0x00000111,
  0x00011111,
  0x00001111,
  0x00000111,

  0x00000111,
  0x00000121,
  0x00000121,
  0x00000111,
  0x00000111,
  0x00000011,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00010000,
  0x00011000,
  0x00011000,
  0x00001100,
  0x00000111,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x01111000,
  0x11111111,
  0x11111111,

  0x11114211,
  0x22124411,
  0x22124411,
  0x44224211,
  0x22111111,
  0x11111110,
  0x11111110,
  0x11111100,

  0x11112100,
  0x11111110,
  0x11111100,
  0x11111101,
  0x11111101,
  0x11122111,
  0x00122111,
  0x00011111,

  0x00000111,
  0x00000011,
  0x00000011,
  0x00000100,
  0x00001000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000011,
  0x00000001,
  0x10000001,
  0x10000011,

  0x10000111,
  0x10000111,
  0x10000111,
  0x10000111,
  0x00000111,
  0x00000011,
  0x00000011,
  0x00000100,

  0x00001000,
  0x00010000,
  0x00000000,
  0x00000000,
  0x00000001,
  0x10000000,
  0x10000000,
  0x10000000,

  0x10000000,
  0x11000000,
  0x11100000,
  0x11100000,
  0x00110000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x10000000,
  0x11000000,
  0x11100000,
  0x11100000,

  0x11110000,
  0x12211100,
  0x24421110,
  0x22221110,
  0x11111110,
  0x11111111,
  0x11111111,
  0x11111110,

  0x01100000,
  0x01101000,
  0x011111e0,
  0x11111110,
  0x11000111,
  0x10000011,
  0x00000011,
  0x00000011,

  0x00000111,
  0x0e111110,
  0x01111e00,
  0x01000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 6
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000001,
  0x00000011,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00011000,
  0x00001000,

  0x00000100,
  0x00000211,
  0x00004211,
  0x00022001,
  0x01100000,
  0x01000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00001000,
  0x10010000,
  0x11120000,
  0x00112000,
  0x00011100,

  0x00000111,
  0x00000011,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x11000000,
  0x01100000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x10000000,
  0x00000000,
  0x01000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation row: 2
  //start animation frame: 0
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000004,
  0x00000024,

  0x00000044,
  0x00000146,
  0x00000145,
  0x00000245,
  0x00000365,
  0x00000435,
  0x00001365,
  0x00001356,

  0x00001465,
  0x00002465,
  0x00014355,
  0x00014355,
  0x00002455,
  0x00000245,
  0x00000146,
  0x00000024,

  0x00000002,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000022,
  0x00012244,
  0x00222465,
  0x02465555,
  0x24658855,
  0x36588885,

  0x55588885,
  0x55588885,
  0x55558855,
  0x55555555,
  0x55555555,
  0x55555555,
  0x56555555,
  0x33555555,

  0x66555555,
  0x55555555,
  0x55555555,
  0x55885555,
  0x58888555,
  0x58888555,
  0x55885555,
  0x55555655,

  0x36655665,
  0x12436636,
  0x00043311,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x22220000,
  0x44441000,
  0x55534000,
  0x55553200,
  0x55553432,
  0x55566564,

  0x55555555,
  0x55555555,
  0x55555555,
  0x55555565,
  0x55555555,
  0x56655555,
  0x55555555,
  0x55555855,

  0x55555855,
  0x55858855,
  0x55588885,
  0x55888885,
  0x55888855,
  0x55588585,
  0x55555555,
  0x55566555,

  0x55634363,
  0x66301221,
  0x44100000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x10000000,
  0x43000000,

  0x64200000,
  0x56410000,
  0x55340000,
  0x55640000,
  0x55531000,
  0x55562000,
  0x55562000,
  0x55640000,

  0x55630000,
  0x55630000,
  0x55310000,
  0x55600000,
  0x55300000,
  0x56400000,
  0x53200000,
  0x64100000,

  0x42000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 1
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000004,
  0x00001444,
  0x00002435,
  0x00014655,
  0x00043555,

  0x00036556,
  0x00036556,
  0x00036555,
  0x00043555,
  0x00046555,
  0x00146555,
  0x00044655,
  0x00002434,

  0x00001434,
  0x00024366,
  0x00043555,
  0x00043666,
  0x00146555,
  0x00435555,
  0x00435558,
  0x00435588,

  0x00435588,
  0x00146558,
  0x00023555,
  0x00014466,
  0x00000124,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000001,
  0x00002444,
  0x00124366,
  0x52435556,
  0x33655555,
  0x55555555,
  0x55558855,
  0x55588885,

  0x65588885,
  0x55558855,
  0x55555555,
  0x55555566,
  0x55555563,
  0x55555556,
  0x55555556,
  0x43655555,

  0x44355555,
  0x65555555,
  0x55555555,
  0x55555555,
  0x55555556,
  0x55555563,
  0x85555563,
  0x88555566,

  0x88555566,
  0x85555644,
  0x55563322,
  0x55341100,
  0x33420000,
  0x11000000,
  0x00000000,
  0x00000000,

  0x22200000,
  0x33420000,
  0x55641000,
  0x56634000,
  0x53342102,
  0x56442224,
  0x55343443,
  0x55666665,

  0x55566555,
  0x55566655,
  0x55666565,
  0x55666665,
  0x66666555,
  0x33555555,
  0x66555555,
  0x55555555,

  0x55555555,
  0x55555855,
  0x55585885,
  0x55558888,
  0x65558888,
  0x36555885,
  0x36555555,
  0x66555555,

  0x65336633,
  0x65424224,
  0x36400001,
  0x22000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x22000000,
  0x44210000,
  0x63421000,
  0x55642000,

  0x55534000,
  0x55564100,
  0x55553420,
  0x55555341,
  0x55555542,
  0x55555542,
  0x55555642,
  0x55563421,

  0x55534100,
  0x55563000,
  0x55542000,
  0x55532000,
  0x55534100,
  0x55534000,
  0x55542000,
  0x55641000,

  0x66440000,
  0x34210000,
  0x11000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 2
  0x00000000,
  0x00000000,
  0x00000124,
  0x00000244,
  0x00014466,
  0x00023555,
  0x00135556,
  0x00265566,

  0x00465666,
  0x00266655,
  0x00146655,
  0x00246555,
  0x00265555,
  0x00465555,
  0x00246556,
  0x00024444,

  0x00001442,
  0x00024334,
  0x00143633,
  0x00136333,
  0x00136633,
  0x01435556,
  0x02355555,
  0x02655885,

  0x02658888,
  0x01358888,
  0x00465885,
  0x00246555,
  0x00024365,
  0x00001444,
  0x00000011,
  0x00000000,

  0x00002222,
  0x00012444,
  0x22223633,
  0x42436633,
  0x34555655,
  0x66555555,
  0x66585566,
  0x55888556,

  0x55585566,
  0x55555566,
  0x55555666,
  0x55665644,
  0x55666622,
  0x55566644,
  0x66665534,
  0x44365663,

  0x24366663,
  0x43655566,
  0x66655566,
  0x36665566,
  0x65566663,
  0x65556634,
  0x66556344,
  0x56663334,

  0x55566633,
  0x55566344,
  0x55533322,
  0x55641000,
  0x56410000,
  0x34200000,
  0x11000000,
  0x00000000,

  0x22200000,
  0x36420000,
  0x66321000,
  0x66441000,
  0x63422000,
  0x63424422,
  0x63446634,
  0x33344366,

  0x33342366,
  0x66342363,
  0x36344336,
  0x33333336,
  0x36633666,
  0x43655666,
  0x43555566,
  0x33655566,

  0x66365555,
  0x66336555,
  0x66336555,
  0x66666555,
  0x33666665,
  0x44665555,
  0x24365555,
  0x44665555,

  0x33643663,
  0x33424344,
  0x43400110,
  0x24100000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x22100000,
  0x44210000,
  0x36421000,
  0x55632000,

  0x55564000,
  0x55564210,
  0x66663420,
  0x63365642,
  0x63666564,
  0x66666564,
  0x55666634,
  0x65633441,

  0x55564200,
  0x55563200,
  0x55632100,
  0x55632000,
  0x55564000,
  0x55634000,
  0x55632000,
  0x55642000,

  0x33421000,
  0x44210000,
  0x11000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 3
  0x00000000,
  0x00000000,
  0x00002222,
  0x00024442,
  0x00243663,
  0x01435634,
  0x02366634,
  0x02466336,

  0x02434433,
  0x01444433,
  0x00224333,
  0x02443333,
  0x04466663,
  0x04366663,
  0x02443344,
  0x00124422,

  0x00002222,
  0x00144442,
  0x00243344,
  0x01433444,
  0x00443444,
  0x02243344,
  0x12466334,
  0x14366633,

  0x24665666,
  0x14658556,
  0x14365885,
  0x02465555,
  0x01436666,
  0x00244333,
  0x00012444,
  0x00000111,

  0x00012212,
  0x00044342,
  0x20143444,
  0x22433443,
  0x44655633,
  0x33555633,
  0x35856634,
  0x36566634,

  0x33333334,
  0x33344334,
  0x33333334,
  0x44333344,
  0x33333421,
  0x33343422,
  0x44436642,
  0x24436342,

  0x24433344,
  0x24436332,
  0x44366634,
  0x33333334,
  0x36334444,
  0x36634442,
  0x33334422,
  0x33333444,

  0x63433444,
  0x66344444,
  0x66342212,
  0x66441000,
  0x63420000,
  0x34210000,
  0x42100000,
  0x10000000,

  0x44210000,
  0x33420000,
  0x33411000,
  0x33211000,
  0x33211221,
  0x34224442,
  0x44243334,
  0x42224444,

  0x22221444,
  0x44211434,
  0x44221244,
  0x42221112,
  0x22122222,
  0x21143344,
  0x22146634,
  0x44146663,

  0x44143663,
  0x44243663,
  0x43444666,
  0x43343366,
  0x44334433,
  0x24334433,
  0x22444433,
  0x22244436,

  0x44444336,
  0x44222444,
  0x42201121,
  0x22100000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x12000000,
  0x22220000,
  0x44422000,
  0x43342100,

  0x43334200,
  0x24332210,
  0x44344422,
  0x44443342,
  0x44444332,
  0x44334332,
  0x33344442,
  0x33444422,

  0x34442100,
  0x34442210,
  0x34442000,
  0x33342100,
  0x33342200,
  0x33342200,
  0x36342100,
  0x66342100,

  0x34422000,
  0x42200000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 4
  0x00000000,
  0x00000000,
  0x00022211,
  0x00224211,
  0x00244211,
  0x01434211,
  0x01442111,
  0x01211e11,

  0x00111111,
  0x00000111,
  0x00000000,
  0x20000000,
  0x20000000,
  0x20000000,
  0x20001100,
  0x00011111,

  0x00002211,
  0x00142221,
  0x00242221,
  0x00242441,
  0x00244221,
  0x00122211,
  0x02222211,
  0x12422111,

  0x12421111,
  0x12211111,
  0x12211112,
  0x01211112,
  0x01111124,
  0x00111122,
  0x00011112,
  0x00000110,

  0x00001111,
  0x00111112,
  0x02121124,
  0x12444424,
  0x14333344,
  0x24333342,
  0x24344421,
  0x14421221,

  0x12211211,
  0x11112211,
  0x01111122,
  0x00111222,
  0x00112421,
  0x01114421,
  0x11123321,
  0x11124421,

  0x11122221,
  0x11124442,
  0x22244332,
  0x24244442,
  0x24444222,
  0x14442111,
  0x12442111,
  0x12441112,

  0x11241122,
  0x11221122,
  0x22211011,
  0x44210000,
  0x44200000,
  0x42100000,
  0x22000000,
  0x00000000,

  0x22100000,
  0x44200000,
  0x33211000,
  0x43211000,
  0x44411220,
  0x22212220,
  0x11224421,
  0x11112211,

  0x11111111,
  0x21111122,
  0x21111111,
  0x21111111,
  0x11112211,
  0x11124421,
  0x11143441,
  0x11123342,

  0x11124444,
  0x11112444,
  0x22212444,
  0x22222444,
  0x22221221,
  0x11111111,
  0x11100011,
  0x11000001,

  0x21000001,
  0x21100011,
  0x22100000,
  0xe1e00000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x11220000,
  0x11220000,
  0x11121000,

  0x11111000,
  0x11111000,
  0x11111100,
  0x12111000,
  0x11111000,
  0x11110000,
  0x11100000,
  0x11100000,

  0x21100000,
  0x21110000,
  0x22210000,
  0x22210000,
  0x22211000,
  0x12111000,
  0x11111000,
  0x12110000,

  0x22210000,
  0x22100000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 5
  0x00000000,
  0x00000000,
  0x00001110,
  0x00011000,
  0x00110000,
  0x01100000,
  0x01100000,
  0x01000000,

  0x01000000,
  0x00000000,
  0x00000001,
  0x01100011,
  0x00111111,
  0x00111110,
  0x01111100,
  0x00111100,

  0x00002110,
  0x00222111,
  0x00222411,
  0x002241e1,
  0x00111211,
  0x00011211,
  0x01111111,
  0x01100000,

  0x11000000,
  0x11000000,
  0x10000000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00001111,
  0x00011142,
  0x00011122,
  0x00111111,
  0x00111211,
  0x00111241,
  0x00111241,
  0x01111441,

  0x01111111,
  0x11111111,
  0x11111001,
  0x10010000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00001000,

  0x00011000,
  0x11111001,
  0x11111111,
  0x11111111,
  0x11421111,
  0x11441111,
  0x11111110,
  0x11111100,

  0x01111100,
  0x01111110,
  0x01111001,
  0x01100000,
  0x00100000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x22210000,
  0x44210000,
  0x33210000,
  0x44220000,
  0x14211110,
  0xe2211100,
  0x11411100,
  0x11111100,

  0x11111100,
  0x11111100,
  0x11100000,
  0x11000000,
  0x01000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x11001100,
  0x11111110,
  0x11111111,
  0x11000000,
  0x10000000,
  0x10000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00011001,
  0x11100011,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x11000000,
  0x01000000,
  0x01100000,
  0x01100000,
  0x01100000,

  0x11000000,
  0x11000000,
  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  //start animation frame: 6
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00100000,
  0x00110000,
  0x00000000,
  0x01000001,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000011,
  0x00000111,
  0x00000041,
  0x00000041,
  0x00000411,

  0x00001100,
  0x00001000,
  0x00010000,
  0x00010000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00001000,
  0x00011000,
  0x00410000,
  0x01200000,
  0x11000000,
  0x11000000,

  0x01000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x10000000,
  0x12100000,
  0x11000000,
  0x11000000,

  0x10000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,
  0x00000000,

};
u16 explosion_pal[] = {
   RGB24_TO_VDPCOLOR(0xfe02ff),
   RGB24_TO_VDPCOLOR(0x000000),
   RGB24_TO_VDPCOLOR(0x7f0000),
   RGB24_TO_VDPCOLOR(0xb66d48),
   RGB24_TO_VDPCOLOR(0x914824),
   RGB24_TO_VDPCOLOR(0xdab66d),
   RGB24_TO_VDPCOLOR(0xb69148),
   RGB24_TO_VDPCOLOR(0x0000a0),
   RGB24_TO_VDPCOLOR(0xffffff),
   RGB24_TO_VDPCOLOR(0x008fff),
   RGB24_TO_VDPCOLOR(0x007000),
   RGB24_TO_VDPCOLOR(0x59dc5a),
   RGB24_TO_VDPCOLOR(0xff7678),
   RGB24_TO_VDPCOLOR(0xffff00),
   RGB24_TO_VDPCOLOR(0x666969),
   RGB24_TO_VDPCOLOR(0xbdbebd),
};

