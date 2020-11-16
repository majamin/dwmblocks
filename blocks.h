//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "barmail",					180,		12},
	{"", "barpac",					0,		8},
	{"", "barvol",					0,		10},
	{"", "bardate",					10,		1},
	{"", "bartime",					10,		1},
	{"", "barbatt",					2,		0},
	{"", "barssid",					2,		4},
	{"", "barblue",					1,		10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
