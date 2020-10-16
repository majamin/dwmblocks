//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "barmail",					180,		12},
	{"", "barpac",					3600,		8},
	{"", "barvol",					1,		10},
	{"", "bardate",					60,		1},
	{"", "bartime",					60,		1},
	{"", "barbatt",					5,		0},
	{"", "barssid",					5,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
