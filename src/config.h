// #include <X11/keysym.h>

/* user and group to drop privileges to */
static const char *user = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] = "black",		 /* after initialization */
	[INPUT] = "black",		 /* during input */
	[FAILED] = "black",		 /* wrong password */
	[IDENTIFIER] = "#005577" /* Used to identify working lockscreen */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

#define IDENTIFIER_KEY 0x0060