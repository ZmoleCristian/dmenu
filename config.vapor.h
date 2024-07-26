/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int centered = 0;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
        "terminus:size=14:style=Bold",
        "NotoColorEmoji:pixelsize=32:antialias=true:autohint=true",
        "Font Awesome 6 Free:style=Regular:pixelsize=34:antialias=true:autohint=true",
        "Font Awesome 6 Brands:pixelsize=34:antialias=true:autohint=true",
        "Font Awesome:style=Regular:pixelsize=34:antialias=true:autohint=true",
};
static const unsigned int bgalpha = 0xFF;
static const unsigned int fgalpha = 0xe1;
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#4c0be3", "#000000" },
	[SchemeSel] = { "#f9ac53", "#4c0be3" },
	[SchemeOut] = { "#4c0be3", "#000000" }
};
static const unsigned int alphas[SchemeLast][2] = {
	/*		fgalpha		bgalphga	*/
	[SchemeNorm] = { fgalpha, bgalpha },
	[SchemeSel] = { fgalpha, bgalpha },
	[SchemeOut] = { fgalpha, bgalpha },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 46;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

