/* user and group to drop privileges to */
static const char *user = "nobody";
/* static const char *group = "nogroup"; */
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT] = "black",        /* after initialization */
    [INPUT] = "#458588",     /* during input */
    [INPUT_ALT] = "#4F7B7D", /* during input, second color */
    [FAILED] = "#CC241D",    /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
