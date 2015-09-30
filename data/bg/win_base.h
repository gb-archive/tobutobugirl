#ifndef WIN_BASE_MAP_H
#define WIN_BASE_MAP_H

#define win_base_data_length 29
const unsigned char win_base_data[] = {
	  0,   0,   6,  24,   0,  24,   0,   0,   9,  24,   0,  60,   0, 126,   0, 126, 
	  0,  60,   0,  24,   0,   0,   3,  60,   0, 126,   0, 255,   0, 255,   0, 255, 
	  0, 255,   0, 126,   0,  60,   0,  63,  63,   2,  64,  64,   2, 128, 128,  12, 
	255, 255,   2,   0,   0,  14, 252, 252,   2,   2,   2,   2,   1,   1,  12, 126, 
	  0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 128, 
	128,  16,   0,   0,  18,  60,  60,   2, 102, 102,   2,  96,  96,   4, 102, 102, 
	  2,  60,  60,   2,   0,   0,   4,  96,  96,  10, 126, 126,   2,   0,   0,   4, 
	126, 126,   2,  96,  96,   2, 124, 124,   2,  96,  96,   4, 126, 126,   2,   0, 
	  0,   4,  60,  60,   2, 102, 102,   4, 126, 126,   4, 102, 102,   2,   0,   0, 
	  4, 124, 124,   2, 102, 102,   4, 124, 124,   2, 102, 102,   4,   0,   0,   2, 
	  1,   1,  16,  60,   0, 126,   0, 255,   0, 255,   0, 255,   0, 255,   0, 126, 
	  0, 255, 255,   2, 127,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 
	255,   0, 255, 255,   3,   0, 255,   0, 255,   0, 231,   0, 231,   0, 255,   0, 
	255,   0, 255, 255,   2, 128, 128,  14, 255, 128,   0,   0,  14, 255,   0,   1, 
	  1,  14, 255,   1, 254,   0, 255,   0, 255,   0, 255,   0, 255,   0, 255,   0, 
	255,   0, 255, 255,   2,   0,   0,   2, 126, 126,   2,  24,  24,  10,   0,   0, 
	  4,  24,  24,  12,   0,   0,   4,  98,  98,   2, 118, 118,   2, 126, 126,   4, 
	106, 106,   2,  98,  98,   2,   0,   0,   6,   8,   8,   4,  62,  62,   2,   8, 
	  8,   4,   0,   0,   4,  60,  60,   2, 102, 102,   2, 120, 120,   2,  30,  30, 
	  2, 102, 102,   2,  60,  60,   2,   0,   0,   4,  60,  60,   2, 102, 102,   8, 
	 60,  60,   2,   0,   0,   4, 124, 124,   2, 102, 102,   4, 124, 124,   2,  96, 
	 96,   4,   0,   0,   2
};

#define win_base_tiles_width 20
#define win_base_tiles_height 18
#define win_base_offset 40
const unsigned char win_base_tiles[] = {
	 40,  41,  42,  43,  44,  44,  12,  45,  42,  41,  40,  41,  42,  46,  47,  48, 
	 48,   7,  49,  50,  51,  52,  53,  54,  46,  42,  41,  55,  56,  57,  58,  59, 
	 59,  12,  60,  57,  61,  55,  48,  48,  21,  62,  63,  64,  51,  48,  48,  37, 
	 65,  48,  48,  18,  59,  59,   7,  48,  48,  33,  66,  62,  67,  64,  68,  66, 
	 48,  48,  35,  65,  48,  48,  18,  59,  59,   7,  48,  48,  33,  62,  67,  62, 
	 52,  50,  48,  48,  35,  59,  59,   7,  48,  48,  32
};

#endif
