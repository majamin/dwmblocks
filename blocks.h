//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	/*{"", "~/bin/statusbar/volume",					0,		10},*/
	{"", "~/.local/bin/statusbar/barpac",					3600,		8},
	{"", "~/.local/bin/statusbar/barvol",					1,		10},
	{"", "~/.local/bin/statusbar/bardate",					60,		1},
	{"", "~/.local/bin/statusbar/bartime",					60,		1},
	{"", "~/.local/bin/statusbar/barbatt",					5,		0},
	{"",	"internet",							5,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
