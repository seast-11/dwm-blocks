static const Block blocks[] = {
	/*Icon*/	/*Command*/							/*Update Interval*/	/*Update Signal*/
	{"", 		"~/.local/bin/traffic",  					2,			19},
	{"", 		"~/.local/bin/temperature",					5,			18},
	{"", 		"~/.local/bin/utilization",					2,			21},
	{"", 		"~/.local/bin/disk",						0,			15},
	{"", 		"~/.local/bin/update",						0,			14},
	{"", 		"~/.local/bin/memory",						5,			11},
	{"", 		"~/.local/bin/clock",						60,			20},
	{"", 		"~/.local/bin/volume",						0,			10},
	{"", 		"~/.local/bin/system",						0,			17},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
