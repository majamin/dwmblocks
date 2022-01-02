//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "barclipyt",				1,		0},
	{"", "bargit",					10,		1},
	{"", "barvol",					0,		10},
	{"", "bartime",					10,		1},
	{"", "barbatt",					2,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
