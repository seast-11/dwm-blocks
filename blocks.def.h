static const Block blocks[] = {
	/*Icon*/	/*Command*/		                                              /*Update Interval*/	/*Update Signal*/
	{"", 		"~/.local/bin/traffic",  					                            2,			            19},
	{"", 		"~/.local/bin/temperature",					                          15,			            18},
	{"", 		"~/.local/bin/utilization",					                          2,			            21},
	{"", 		"~/.local/bin/disk",						                              300,		            15},
	{"", 		"~/.local/bin/update",						                            0,			            14},
	{"",    "~/.local/bin/memory",	                                      15,		              0},
	{"",    "~/.local/bin/clock",	                                        15,		              0},
	{"", 		"~/.local/bin/volume",						                            0,			            10},
	{"", 		"~/.local/bin/connectivity.sh",		                            15,			            0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
