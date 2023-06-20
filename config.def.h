/* See LICENSE file for copyright and license details. */

/* appearance */
static const unsigned int borderpx       = 3;   /* border pixel of windows */
static const int corner_radius           = 0;
static const unsigned int snap           = 32;  /* snap pixel */
static const int swallowfloating         = 0;   /* 1 means swallow floating windows by default */
static const int scalepreview            = 4;        /* Tag preview scaling */
static const unsigned int gappih         = 20;  /* horiz inner gap between windows */
static const unsigned int gappiv         = 10;  /* vert inner gap between windows */
static const unsigned int gappoh         = 10;  /* horiz outer gap between windows and screen edge */
static const unsigned int gappov         = 30;  /* vert outer gap between windows and screen edge */
static const int smartgaps_fact          = 1;   /* gap factor when there is only one client; 0 = no gaps, 3 = 3x outer gaps */
static const char autostartblocksh[]     = "autostart_blocking.sh";
static const char autostartsh[]          = "autostart.sh";
static const char dwmdir[]               = "dwm";
static const char localshare[]           = ".local/share";
static const int usealtbar               = 0;        /* 1 means use non-dwm status bar */
static const char *altbarclass           = "Polybar"; /* Alternate bar class name */
static const char *altbarcmd             = "${XDG_CONFIG_HOME:-HOME/.config}/polybar/launch-polybar.sh &"; /* Alternate bar launch command */
static const int showbar                 = 1;   /* 0 means no bar */
static const int topbar                  = 1;   /* 0 means bottom bar */
static const int vertpad                 = 10;  /* vertical padding of bar */
static const int sidepad                 = 10;  /* horizontal padding of bar */
#define ICONSIZE 20    /* icon size */
#define ICONSPACING 5  /* space between icon and title */
static int floatposgrid_x                = 5;  /* float grid columns */
static int floatposgrid_y                = 5;  /* float grid rows */
static const char slopspawnstyle[]       = "-t 0 -c 0.92,0.85,0.69,0.3 -o"; /* do NOT define -f (format) here */
static const char slopresizestyle[]      = "-t 0 -c 0.92,0.85,0.69,0.3"; /* do NOT define -f (format) here */
static const int riodraw_borders         = 0;  /* 0 or 1, indicates whether the area drawn using slop includes the window borders */
static const int riodraw_matchpid        = 0;  /* 0 or 1, indicates whether to match the PID of the client that was spawned with riospawn */
/* Status is to be shown on: -1 (all monitors), 0 (a specific monitor by index), 'A' (active monitor) */
static const int statusmon               = 'A';
static const int horizpadbar             = 2;   /* horizontal padding for statusbar */
static const int vertpadbar              = 0;   /* vertical padding for statusbar */
static const unsigned int systrayspacing = 2;   /* systray spacing */
static const int showsystray             = 1;   /* 0 means no systray */
static const unsigned int ulinepad = 5;         /* horizontal padding between the underline and tag */
static const unsigned int ulinestroke  = 2;     /* thickness / height of the underline */
static const unsigned int ulinevoffset = 0;     /* how far above the bottom of the bar the line should appear */
static const int ulineall = 0;                  /* 1 to show underline on all tags, 0 for just the active ones */


/* alt-tab configuration */
static const unsigned int tabmodkey        = 0x40; /* (Alt) when this key is held down the alt-tab functionality stays active. Must be the same modifier as used to run alttabstart */
static const unsigned int tabcyclekey      = 0x17; /* (Tab) when this key is hit the menu moves one position forward in client stack. Must be the same key as used to run alttabstart */
static const unsigned int tabposy          = 1;    /* tab position on Y axis, 0 = top, 1 = center, 2 = bottom */
static const unsigned int tabposx          = 1;    /* tab position on X axis, 0 = left, 1 = center, 2 = right */
static const unsigned int maxwtab          = 600;  /* tab menu width */
static const unsigned int maxhtab          = 200;  /* tab menu height */

/* Indicators: see patch/bar_indicators.h for options */
static int tagindicatortype              = INDICATOR_TOP_LEFT_SQUARE;
static int tiledindicatortype            = INDICATOR_NONE;
static int floatindicatortype            = INDICATOR_TOP_LEFT_SQUARE;
static const char statussep              = ';'; /* separator between status bars */
static const char *fonts[]               = { 
	"monospace:pixelsize=16",
	"JoyPixels:style=Regular:pixelsize=16:antialias=true:hinting=true",
	"Font Awesome 6 Free:style=Solid:pixelsize=16:antialias=true:hinting=true",
	"Font Awesome 6 Brands:style=Regular:pixelsize=16:antialias=true:hinting=true",
	"Font Awesome 6 Free:style=Regular:pixelsize=16:antialias=true:hinting=true"
};
static const char dmenufont[]            = "monospace:size=18";

static char c000000[]                    = "#000000"; // placeholder value

static char normfgcolor[]                = "#ffffff";
static char normbgcolor[]                = "#111111";
static char normbordercolor[]            = "#444444";
static char normfloatcolor[]             = "#db8fd9";

static char selfgcolor[]                 = "#eeeeee";
static char selbgcolor[]                 = "#005577";
static char selbordercolor[]             = "#005577";
static char selfloatcolor[]              = "#005577";

static char titlenormfgcolor[]           = "#ffffff";
static char titlenormbgcolor[]           = "#111111";
static char titlenormbordercolor[]       = "#444444";
static char titlenormfloatcolor[]        = "#db8fd9";

static char titleselfgcolor[]            = "#eeeeee";
static char titleselbgcolor[]            = "#005577";
static char titleselbordercolor[]        = "#005577";
static char titleselfloatcolor[]         = "#005577";

static char tagsnormfgcolor[]            = "#ffffff";
static char tagsnormbgcolor[]            = "#111111";
static char tagsnormbordercolor[]        = "#444444";
static char tagsnormfloatcolor[]         = "#db8fd9";

static char tagsselfgcolor[]             = "#eeeeee";
static char tagsselbgcolor[]             = "#005577";
static char tagsselbordercolor[]         = "#005577";
static char tagsselfloatcolor[]          = "#005577";

static char hidnormfgcolor[]             = "#000000";
static char hidselfgcolor[]              = "#000000";
static char hidnormbgcolor[]             = "#222222";
static char hidselbgcolor[]              = "#222222";

static char urgfgcolor[]                 = "#ffffff";
static char urgbgcolor[]                 = "#efe417";
static char urgbordercolor[]             = "#ff0000";
static char urgfloatcolor[]              = "#db8fd9";

static char scratchselfgcolor[]          = "#FFF7D4";
static char scratchselbgcolor[]          = "#77547E";
static char scratchselbordercolor[]      = "#894B9F";
static char scratchselfloatcolor[]       = "#894B9F";

static char scratchnormfgcolor[]         = "#FFF7D4";
static char scratchnormbgcolor[]         = "#664C67";
static char scratchnormbordercolor[]     = "#77547E";
static char scratchnormfloatcolor[]      = "#77547E";


static char tag1fgcolor[] = "#f92672";
static char tag1bgcolor[] = "#272822";
static char tag2fgcolor[] = "#a6e22e";
static char tag2bgcolor[] = "#272822";
static char tag3fgcolor[] = "#f4bf75";
static char tag3bgcolor[] = "#272822";
static char tag4fgcolor[] = "#66d9ef";
static char tag4bgcolor[] = "#272822";
static char tag5fgcolor[] = "#ae81ff";
static char tag5bgcolor[] = "#272822";
static char tag6fgcolor[] = "#f8f8f2";
static char tag6bgcolor[] = "#272822";
static char tag7fgcolor[] = "#75715e";
static char tag7bgcolor[] = "#272822";
static char tag8fgcolor[] = "#f4bf75";
static char tag8bgcolor[] = "#272822";
static char tag9fgcolor[] = "#a1efe4";
static char tag9bgcolor[] = "#272822";
static char layoutfgcolor[] = "#ae81ff";
static char layoutbgcolor[] = "#272822";

static const unsigned int baralpha = 0xb2;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3] = {
	/*                       fg      bg        border     */
	[SchemeNorm]         = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]          = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleNorm]    = { OPAQUE, baralpha, borderalpha },
	[SchemeTitleSel]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsNorm]     = { OPAQUE, baralpha, borderalpha },
	[SchemeTagsSel]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidNorm]      = { OPAQUE, baralpha, borderalpha },
	[SchemeHidSel]       = { OPAQUE, baralpha, borderalpha },
	[SchemeUrg]          = { OPAQUE, baralpha, borderalpha },
	[SchemeScratchSel]  = { OPAQUE, baralpha, borderalpha },
	[SchemeScratchNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeTag1]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag2]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag3]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag4]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag5]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag6]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag7]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag8]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag9]         = { OPAQUE, baralpha, borderalpha},
	[SchemeLayout]       = { OPAQUE, baralpha, borderalpha},
};

static char *colors[][ColCount] = {
	/*                       fg                bg                border                float */
	[SchemeNorm]         = { normfgcolor,      normbgcolor,      normbordercolor,      normfloatcolor },
	[SchemeSel]          = { selfgcolor,       selbgcolor,       selbordercolor,       selfloatcolor },
	[SchemeTitleNorm]    = { titlenormfgcolor, titlenormbgcolor, titlenormbordercolor, titlenormfloatcolor },
	[SchemeTitleSel]     = { titleselfgcolor,  titleselbgcolor,  titleselbordercolor,  titleselfloatcolor },
	[SchemeTagsNorm]     = { tagsnormfgcolor,  tagsnormbgcolor,  tagsnormbordercolor,  tagsnormfloatcolor },
	[SchemeTagsSel]      = { tagsselfgcolor,   tagsselbgcolor,   tagsselbordercolor,   tagsselfloatcolor },
	[SchemeHidNorm]      = { hidnormfgcolor,   hidnormbgcolor,   c000000,              c000000 },
	[SchemeHidSel]       = { hidselfgcolor,    hidselbgcolor,    c000000,              c000000 },
	[SchemeUrg]          = { urgfgcolor,       urgbgcolor,       urgbordercolor,       urgfloatcolor },
	[SchemeScratchSel]  = { scratchselfgcolor, scratchselbgcolor, scratchselbordercolor, scratchselfloatcolor },
	[SchemeScratchNorm] = { scratchnormfgcolor, scratchnormbgcolor, scratchnormbordercolor, scratchnormfloatcolor },
	[SchemeTag1]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag2]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag3]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag4]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag5]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag6]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag7]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag8]         = { OPAQUE, baralpha, borderalpha},
	[SchemeTag9]         = { OPAQUE, baralpha, borderalpha},
	[SchemeLayout]       = { OPAQUE, baralpha, borderalpha},
	[SchemeTag1]         = { tag1fgcolor,      tag1bgcolor,      c000000 },
	[SchemeTag2]         = { tag2fgcolor,      tag2bgcolor,      c000000 },
	[SchemeTag3]         = { tag3fgcolor,      tag3bgcolor,	     c000000 },
	[SchemeTag4]         = { tag4fgcolor,      tag4bgcolor,	     c000000 },
	[SchemeTag5]         = { tag5fgcolor,      tag5bgcolor,      c000000 },
	[SchemeTag6]         = { tag6fgcolor,      tag6bgcolor,      c000000 },
	[SchemeTag7]         = { tag7fgcolor,      tag7bgcolor,      c000000 },
	[SchemeTag8]         = { tag8fgcolor,      tag8bgcolor,      c000000 },
	[SchemeTag9]         = { tag9fgcolor,      tag9bgcolor,      c000000 },
	[SchemeLayout]       = { layoutfgcolor,    layoutbgcolor,    c000000 },
};


static const char *layoutmenu_cmd = "layoutmenu.sh";

static const char *const autostart[] = {
	"dwmblocks", NULL,
	NULL /* terminate */
};

static const char *scratchpadcmd[]  = {"s", "scratchpad", "--class", "Scratchpad", "--name", "spterm", "--title", "Scratchpad", "--lines", "34", "--columns", "120", NULL };
static const char *scratchpadcmd2[]  = {"r", "scratchpad", "--class", "Scratchpad", "--name", "spfilemanager", "--title", "File Manager", "--lines", "34", "--columns", "120", "--terminal", "kitty", "--command", "lf", NULL };
static const char *scratchpadcmd3[]  = {"m", "scratchpad", "--class", "Scratchpad", "--name", "spmusic", "--title", "Music", "--lines", "34", "--columns", "120", "--command", "ncmpcpp --screen visualizer", NULL };
static const char *scratchpadcmd4[]  = {"c", "scratchpad", "--class", "Scratchpad", "--name", "spcalc", "--title", "Calculator", "--lines", "34", "--columns", "120", "--command", "qalc", NULL };
static const char *scratchpadcmd5[]  = {"x", "scratchpad", "--class", "Scratchpad", "--name", "sppython", "--title", "Python Shell", "--lines", "34", "--columns", "120", "--command", "bpython", NULL };
static const char *scratchpadcmd6[]  = {"h", "scratchpad", "--class", "Scratchpad", "--name", "sphtop", "--title", "Htop", "--lines", "34", "--columns", "120", "--command", "tmux new-session -n htop htop \; new-window -n nvtop nvtop \; new-window -n btop btop \; select-window -t 1 \; attach", NULL };

/* Tags
 * In a traditional dwm the number of tags in use can be changed simply by changing the number
 * of strings in the tags array. This build does things a bit different which has some added
 * benefits. If you need to change the number of tags here then change the NUMTAGS macro in dwm.c.
 *
 * Examples:
 *
 *  1) static char *tagicons[][NUMTAGS*2] = {
 *         [DEFAULT_TAGS] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", "G", "H", "I" },
 *     }
 *
 *  2) static char *tagicons[][1] = {
 *         [DEFAULT_TAGS] = { "•" },
 *     }
 *
 * The first example would result in the tags on the first monitor to be 1 through 9, while the
 * tags for the second monitor would be named A through I. A third monitor would start again at
 * 1 through 9 while the tags on a fourth monitor would also be named A through I. Note the tags
 * count of NUMTAGS*2 in the array initialiser which defines how many tag text / icon exists in
 * the array. This can be changed to *3 to add separate icons for a third monitor.
 *
 * For the second example each tag would be represented as a bullet point. Both cases work the
 * same from a technical standpoint - the icon index is derived from the tag index and the monitor
 * index. If the icon index is is greater than the number of tag icons then it will wrap around
 * until it an icon matches. Similarly if there are two tag icons then it would alternate between
 * them. This works seamlessly with alternative tags and alttagsdecoration patches.
 */
static char *tagicons[][NUMTAGS] =
{
	[DEFAULT_TAGS]        = { "", "", "", "", "E", "", "", "", "" },
	[ALTERNATIVE_TAGS]    = { "1", "2", "3", "4", "5", "6", "7", "8", "9" },
	[ALT_TAGS_DECORATION] = { "<1>", "<2>", "<3>", "<4>", "<5>", "<6>", "<7>", "<8>", "<9>" },
};


/* There are two options when it comes to per-client rules:
 *  - a typical struct table or
 *  - using the RULE macro
 *
 * A traditional struct table looks like this:
 *    // class      instance  title  wintype  tags mask  isfloating  monitor
 *    { "Gimp",     NULL,     NULL,  NULL,    1 << 4,    0,          -1 },
 *    { "Firefox",  NULL,     NULL,  NULL,    1 << 7,    0,          -1 },
 *
 * The RULE macro has the default values set for each field allowing you to only
 * specify the values that are relevant for your rule, e.g.
 *
 *    RULE(.class = "Gimp", .tags = 1 << 4)
 *    RULE(.class = "Firefox", .tags = 1 << 7)
 *
 * Refer to the Rule struct definition for the list of available fields depending on
 * the patches you enable.
 */
static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 *	WM_WINDOW_ROLE(STRING) = role
	 *	_NET_WM_WINDOW_TYPE(ATOM) = wintype
	 */
	RULE(.wintype = WTYPE "DIALOG",  .isfloating = 1)
	RULE(.wintype = WTYPE "UTILITY", .isfloating = 1)
	RULE(.wintype = WTYPE "TOOLBAR", .isfloating = 1)
	RULE(.wintype = WTYPE "SPLASH",  .isfloating = 1)
	RULE(.class = "Firefox",         .tags = 000000010)
	RULE(.class = "Gimp",            .tags = 000000100)
	RULE(.title = "ncmpcpp 0.9.2",   .tags = 000100000)
	RULE(.title = "Music",           .tags = 000100000)
	RULE(.class = "mpv",             .tags = 001000000)
	RULE(.class = "Steam",           .tags = 010000000)
	RULE(.class = "discord",         .tags = 100000000)
	// No swallowing
	RULE(.class = "qutebrowser",     .noswallow  = 1)
	RULE(.class = "Zathura",         .noswallow  = 1)
	RULE(.instance = "lemonbar",     .noswallow  = 1)
	// Windows floating definitions
	RULE(.class = "qpwgraph",        .isfloating = 1)
	RULE(.class = "Scratchpad",      .isfloating = 1,
			                 .iscentered = 1,
					 .isterminal = 1)
	RULE(.class = "Tk",              .isfloating = 1,
			                 .iscentered = 1,
					 .noswallow  = 1)
	RULE(.class = "Yad",             .isfloating = 1,
			                 .iscentered = 1,
					 .noswallow  = 1)
	RULE(.class = "org-jdownloader-update-launcher-JDLauncher",
			                 .isfloating = 1,
					 .iscentered = 1,
					 .noswallow  = 1)
	RULE(.instance = "Places",       .isfloating = 1,
			                 .iscentered = 1)
	RULE(.title = "/dev/ttyUSB0",    .isfloating = 1)
	// Terminal definitions
	RULE(.class = "Alacritty",       .isterminal = 1)
	RULE(.class = "kitty",           .isterminal = 1)
	RULE(.class = "St",              .isterminal = 1)
	// Other definitions
	RULE(.title = "Event Tester",    .noswallow = 1) /* xev */
	RULE(.instance = "spterm",       .scratchkey = 's',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spfilemanager",.scratchkey = 'r',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spmusic",      .scratchkey = 'm',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spcalc",       .scratchkey = 'c',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "sppython",     .scratchkey = 'x',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "sphtop",       .scratchkey = 'h',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spterm",       .scratchkey = 's',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spfilemanager",.scratchkey = 'r',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spmusic",      .scratchkey = 'm',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "spcalc",       .scratchkey = 'c',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "sppython",     .scratchkey = 'x',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
	RULE(.instance = "sphtop",       .scratchkey = 'h',
					 .isfloating = 1,
					 .iscentered = 1,
					 .isterminal = 1)
};

static const MonitorRule monrules[] = {
	/* monitor  tag   layout  mfact  nmaster  showbar  topbar */
	{  1,       -1,   2,      -1,    -1,      -1,      -1     }, // use a different layout for the second monitor
	{  -1,      -1,   0,      -1,    -1,      -1,      -1     }, // default
};


/* Bar rules allow you to configure what is shown where on the bar, as well as
 * introducing your own bar modules.
 *
 *    monitor:
 *      -1  show on all monitors
 *       0  show on monitor 0
 *      'A' show on active monitor (i.e. focused / selected) (or just -1 for active?)
 *    bar - bar index, 0 is default, 1 is extrabar
 *    alignment - how the module is aligned compared to other modules
 *    widthfunc, drawfunc, clickfunc - providing bar module width, draw and click functions
 *    name - does nothing, intended for visual clue and for logging / debugging
 */
static const BarRule barrules[] = {
	/* monitor   bar    alignment         widthfunc                 drawfunc                clickfunc                hoverfunc                name */
	{ -1,        0,     BAR_ALIGN_LEFT,   width_tags,               draw_tags,              click_tags,              hover_tags,              "tags" },
	{  0,        0,     BAR_ALIGN_RIGHT,  width_systray,            draw_systray,           click_systray,           NULL,                    "systray" },
	{ -1,        0,     BAR_ALIGN_LEFT,   width_ltsymbol,           draw_ltsymbol,          click_ltsymbol,          NULL,                    "layout" },
	{ statusmon, 0,     BAR_ALIGN_RIGHT,  width_status,             draw_status,            click_statuscmd,         NULL,                    "status" },
	{ -1,        0,     BAR_ALIGN_NONE,   width_wintitle,           draw_wintitle,          click_wintitle,          NULL,                    "wintitle" },
	{ statusmon, 1,     BAR_ALIGN_CENTER, width_status_es,          draw_status_es,         click_statuscmd_es,      NULL,                    "status_es" },
};

/* layout(s) */
static const float mfact     = 0.55; /* factor of master area size [0.05..0.95] */
static const int nmaster     = 1;    /* number of clients in master area */
static const int resizehints = 0;    /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen = 1; /* 1 will force focus on the fullscreen window */

#define FORCE_VSPLIT 1

/* mouse scroll resize */
static const int scrollsensetivity = 30; /* 1 means resize window by 1 pixel for each scroll event */
/* resizemousescroll direction argument list */
static const int scrollargs[][2] = {
	/* width change         height change */
	{ +scrollsensetivity,	0 },
	{ -scrollsensetivity,	0 },
	{ 0, 				  	+scrollsensetivity },
	{ 0, 					-scrollsensetivity },
};

static const Layout layouts[] = {
	/* symbol     arrange function */
	{ "[]=",      tile },    /* first entry is default */
	{ "[M]",      monocle },
	{ "HHH",      grid },
	{ "><>",      NULL },    /* no layout function means floating behavior */
	{ "===",      bstackhoriz },
	{ "TTT",      bstack },
	{ "|M|",      centeredmaster },
	{ ">M>",      centeredfloatingmaster },
	{ "|||",      col },
	{ "[D]",      deck },
	{ "(@)",      spiral },
	{ "[\\]",     dwindle },
	{ "---",      horizgrid },
	{ ":::",      gaplessgrid },
	{ "###",      nrowgrid },
};


/* key definitions */
#define MODKEY Mod4Mask
#define TAGKEYS(KEY,TAG) \
	{ MODKEY,                       KEY,      comboview,      {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask,           KEY,      toggleview,     {.ui = 1 << TAG} }, \
	{ MODKEY|ShiftMask,             KEY,      combotag,       {.ui = 1 << TAG} }, \
	{ MODKEY|ControlMask|ShiftMask, KEY,      toggletag,      {.ui = 1 << TAG} },



/* helper for spawning shell commands in the pre dwm-5.0 fashion */
#define SHCMD(cmd) { .v = (const char*[]){ "/bin/sh", "-c", cmd, NULL } }

/* commands */
static char dmenumon[2] = "0"; /* component of dmenucmd, manipulated in spawn() */
static const char *dmenucmd[] = {
	"dmenu_run",
	"-m", dmenumon,
	"-fn", dmenufont,
	"-nb", normbgcolor,
	"-nf", normfgcolor,
	"-sb", selbgcolor,
	"-sf", selfgcolor,
	"-hp", "alacritty,arduino-ide,atlauncher,discord,filezilla,firefox,jellyfinmediaplayer,keepassxc,libreoffice,st,syncthingtray",
	NULL
};
static const char *termcmd[]  = { "kitty", NULL };

/* This defines the name of the executable that handles the bar (used for signalling purposes) */
#define STATUSBAR "dwmblocks"

static const char* firefoxcmd[] = {"firefox", NULL};
static const Key on_empty_keys[] = {
	/* modifier key            function                argument */
	{ 0,        XK_f,          spawn,                  {.v = firefoxcmd } },
	{ 0,        XK_Return,     spawn,                  {.v = termcmd    } },
};

static const Key keys[] = {
	/* modifier                     key            function                argument */
	{ MODKEY,                       XK_p,          spawn,                  {.v = dmenucmd } },
	{ MODKEY|ShiftMask,             XK_Return,     spawn,                  {.v = termcmd } },
	//{ MODKEY|ControlMask,           XK_p,          riospawnsync,           {.v = dmenucmd } },
	//{ MODKEY|ControlMask,           XK_Return,     riospawn,               {.v = termcmd } },
	//{ MODKEY,                       XK_s,          rioresize,              {0} },
	{ MODKEY,                       XK_b,          togglebar,              {0} },
	//{ MODKEY|ControlMask,           XK_space,      focusmaster,            {0} },
	{ MODKEY,                       XK_j,          focusstack,             {.i = +1 } },
	{ MODKEY,                       XK_k,          focusstack,             {.i = -1 } },
	{ MODKEY|Mod1Mask,              XK_j,          rotatestack,            {.i = +1 } },
	{ MODKEY|Mod1Mask,              XK_k,          rotatestack,            {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_j,          inplacerotate,          {.i = +2 } }, // same as rotatestack
	//{ MODKEY|Mod1Mask,              XK_k,          inplacerotate,          {.i = -2 } }, // same as reotatestack
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_j,          inplacerotate,          {.i = +1} },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_k,          inplacerotate,          {.i = -1} },
	{ MODKEY,                       XK_i,          incnmaster,             {.i = +1 } },
	{ MODKEY,                       XK_d,          incnmaster,             {.i = -1 } },
	{ MODKEY,                       XK_h,          setmfact,               {.f = -0.05} },
	{ MODKEY,                       XK_l,          setmfact,               {.f = +0.05} },
	{ MODKEY|ShiftMask,             XK_h,          setcfact,               {.f = +0.25} },
	{ MODKEY|ShiftMask,             XK_l,          setcfact,               {.f = -0.25} },
	{ MODKEY|ShiftMask,             XK_o,          setcfact,               {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_e,          aspectresize,           {.i = +24} },
	{ MODKEY|ControlMask|ShiftMask, XK_r,          aspectresize,           {.i = -24} },
	//{ MODKEY|Mod1Mask,              XK_Down,       moveresize,             {.v = "0x 25y 0w 0h" } },
	//{ MODKEY|Mod1Mask,              XK_Up,         moveresize,             {.v = "0x -25y 0w 0h" } },
	//{ MODKEY|Mod1Mask,              XK_Right,      moveresize,             {.v = "25x 0y 0w 0h" } },
	//{ MODKEY|Mod1Mask,              XK_Left,       moveresize,             {.v = "-25x 0y 0w 0h" } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_Down,       moveresize,             {.v = "0x 0y 0w 25h" } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_Up,         moveresize,             {.v = "0x 0y 0w -25h" } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_Right,      moveresize,             {.v = "0x 0y 25w 0h" } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_Left,       moveresize,             {.v = "0x 0y -25w 0h" } },
	{ MODKEY|ShiftMask,             XK_j,          movestack,              {.i = +1 } },
	{ MODKEY|ShiftMask,             XK_k,          movestack,              {.i = -1 } },
	{ MODKEY,                       XK_Return,     zoom,                   {0} },
	//{ MODKEY|Mod1Mask,              XK_u,          incrgaps,               {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_u,          incrgaps,               {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_i,          incrigaps,              {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_i,          incrigaps,              {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_o,          incrogaps,              {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_o,          incrogaps,              {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_6,          incrihgaps,             {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_6,          incrihgaps,             {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_7,          incrivgaps,             {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_7,          incrivgaps,             {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_8,          incrohgaps,             {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_8,          incrohgaps,             {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_9,          incrovgaps,             {.i = +1 } },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_9,          incrovgaps,             {.i = -1 } },
	//{ MODKEY|Mod1Mask,              XK_0,          togglegaps,             {0} },
	//{ MODKEY|Mod1Mask|ShiftMask,    XK_0,          defaultgaps,            {0} },
	{ Mod1Mask,                     XK_Tab,        alttabstart,            {0} },
	{ MODKEY,                       XK_Tab,        view,                   {0} },
	{ MODKEY|ShiftMask,             XK_Left,       shifttagclients,        { .i = -1 } }, // note keybinding conflict with focusadjacenttag tagtoleft
	{ MODKEY|ShiftMask,             XK_Right,      shifttagclients,        { .i = +1 } }, // note keybinding conflict with focusadjacenttag tagtoright
	{ MODKEY|ControlMask,           XK_Left,       shiftview,              { .i = -1 } },
	{ MODKEY|ControlMask,           XK_Right,      shiftview,              { .i = +1 } },
	{ MODKEY,                       XK_Left,       shiftviewclients,       { .i = -1 } },
	{ MODKEY,                       XK_Right,      shiftviewclients,       { .i = +1 } },
	//{ MODKEY|ControlMask,           XK_Left,       shiftboth,              { .i = -1 } }, // note keybinding conflict with focusadjacenttag tagandviewtoleft
	//{ MODKEY|ControlMask,           XK_Right,      shiftboth,              { .i = +1 } }, // note keybinding conflict with focusadjacenttag tagandviewtoright
	{ MODKEY|ShiftMask,             XK_c,          killclient,             {0} },
	{ MODKEY|ShiftMask,             XK_r,          self_restart,           {0} },
	{ MODKEY|ShiftMask,             XK_q,          quit,                   {0} },
	{ MODKEY|ControlMask|ShiftMask, XK_q,          quit,                   {1} },
	{ MODKEY,                       XK_u,          focusurgent,            {0} },
	{ MODKEY|ShiftMask,             XK_F5,         xrdb,                   {.v = NULL } },
	//{ MODKEY,                       XK_t,          setlayout,              {.v = &layouts[0]} },
	//{ MODKEY,                       XK_f,          setlayout,              {.v = &layouts[1]} },
	//{ MODKEY,                       XK_m,          setlayout,              {.v = &layouts[2]} },
	//{ MODKEY,                       XK_c,          setlayout,              {.v = &layouts[3]} },
	//{ MODKEY,                       XK_space,      setlayout,              {0} },
	{ MODKEY,                       XK_t,          togglefloating,         {0} },
	//{ MODKEY|ControlMask|ShiftMask, XK_h,          togglehorizontalmax,    {0} },
	//{ MODKEY|ControlMask|ShiftMask, XK_l,          togglehorizontalmax,    {0} },
	//{ MODKEY|ControlMask|ShiftMask, XK_j,          toggleverticalmax,      {0} },
	//{ MODKEY|ControlMask|ShiftMask, XK_k,          toggleverticalmax,      {0} },
	//{ MODKEY|ControlMask,           XK_m,          togglemax,              {0} },
	{ MODKEY,                       XK_s,          togglescratch,          {.v = scratchpadcmd } },
	/* { MODKEY|ControlMask,           XK_s,          setscratch,             {.v = scratchpadcmd } }, */
	/* { MODKEY|ShiftMask,             XK_grave,      removescratch,          {.v = scratchpadcmd } }, */
	{ MODKEY,                       XK_r,          togglescratch,          {.v = scratchpadcmd2} },
	{ MODKEY,                       XK_m,          togglescratch,          {.v = scratchpadcmd3} },
	{ MODKEY,                       XK_c,          togglescratch,          {.v = scratchpadcmd4} },
	{ MODKEY,                       XK_x,          togglescratch,          {.v = scratchpadcmd5} },
	{ Mod1Mask,                     XK_h,          togglescratch,          {.v = scratchpadcmd6} },
	{ MODKEY,                       XK_f,          togglefullscreen,       {0} },
	{ MODKEY|ShiftMask,             XK_f,          fullscreen,             {0} }, 
	{ MODKEY|ShiftMask,             XK_s,          togglesticky,           {0} },
	{ MODKEY,                       XK_0,          view,                   {.ui = ~0 } },
	{ MODKEY|ShiftMask,             XK_0,          tag,                    {.ui = ~0 } },
	//{ MODKEY,                       XK_comma,      focusmon,               {.i = -1 } },
	//{ MODKEY,                       XK_period,     focusmon,               {.i = +1 } },
	//{ MODKEY|ShiftMask,             XK_comma,      tagmon,                 {.i = -1 } },
	//{ MODKEY|ShiftMask,             XK_period,     tagmon,                 {.i = +1 } },
	{ MODKEY,                       XK_n,          togglealttag,           {0} },
	//{ MODKEY,                       XK_KP_7,       explace,                {.ui = EX_NW }},   /* XK_KP_Home,  */
	//{ MODKEY,                       XK_KP_8,       explace,                {.ui = EX_N  }},   /* XK_KP_Up,    */
	//{ MODKEY,                       XK_KP_9,       explace,                {.ui = EX_NE }},   /* XK_KP_Prior, */
	//{ MODKEY,                       XK_KP_4,       explace,                {.ui = EX_W  }},   /* XK_KP_Left,  */
	//{ MODKEY,                       XK_KP_5,       explace,                {.ui = EX_C  }},   /* XK_KP_Begin, */
	//{ MODKEY,                       XK_KP_6,       explace,                {.ui = EX_E  }},   /* XK_KP_Right, */
	//{ MODKEY,                       XK_KP_1,       explace,                {.ui = EX_SW }},   /* XK_KP_End,   */
	//{ MODKEY,                       XK_KP_2,       explace,                {.ui = EX_S  }},   /* XK_KP_Down,  */
	//{ MODKEY,                       XK_KP_3,       explace,                {.ui = EX_SE }},   /* XK_KP_Next,  */

	//{ MODKEY|ShiftMask,             XK_KP_8,       exresize,               {.v = (int []){   0,  25 }}},  /* XK_KP_Up,    */
	//{ MODKEY|ShiftMask,             XK_KP_2,       exresize,               {.v = (int []){   0, -25 }}},  /* XK_KP_Down,  */
	//{ MODKEY|ShiftMask,             XK_KP_6,       exresize,               {.v = (int []){  25,   0 }}},  /* XK_KP_Right, */
	//{ MODKEY|ShiftMask,             XK_KP_4,       exresize,               {.v = (int []){ -25,   0 }}},  /* XK_KP_Left,  */
	//{ MODKEY|ShiftMask,             XK_KP_5,       exresize,               {.v = (int []){  25,  25 }}},  /* XK_KP_Begin, */
	//{ MODKEY|ShiftMask|ControlMask, XK_KP_5,       exresize,               {.v = (int []){ -25, -25 }}},  /* XK_KP_Begin, */

	//{ MODKEY|ControlMask,           XK_KP_6,       togglehorizontalexpand, {.i = +1} },  /* XK_KP_Right, */
	//{ MODKEY|ControlMask,           XK_KP_3,       togglehorizontalexpand, {.i =  0} },  /* XK_KP_Next,  */
	//{ MODKEY|ControlMask,           XK_KP_4,       togglehorizontalexpand, {.i = -1} },  /* XK_KP_Left,  */
	//{ MODKEY|ControlMask,           XK_KP_8,       toggleverticalexpand,   {.i = +1} },  /* XK_KP_Up,    */
	//{ MODKEY|ControlMask,           XK_KP_1,       toggleverticalexpand,   {.i =  0} },  /* XK_KP_End,   */
	//{ MODKEY|ControlMask,           XK_KP_2,       toggleverticalexpand,   {.i = -1} },  /* XK_KP_Down,  */
	//{ MODKEY|ControlMask,           XK_KP_9,       togglemaximize,         {.i = -1} },  /* XK_KP_Prior, */
	//{ MODKEY|ControlMask,           XK_KP_7,       togglemaximize,         {.i = +1} },  /* XK_KP_Home,  */
	//{ MODKEY|ControlMask,           XK_KP_5,       togglemaximize,         {.i =  0} },  /* XK_KP_Begin, */
	/* Note that due to key limitations the below example kybindings are defined with a Mod3Mask,
	 * which is not always readily available. Refer to the patch wiki for more details. */
	/* Client position is limited to monitor window area */
	//{ Mod3Mask,                     XK_u,            floatpos,               {.v = "-26x -26y" } }, // ↖
	//{ Mod3Mask,                     XK_i,            floatpos,               {.v = "  0x -26y" } }, // ↑
	//{ Mod3Mask,                     XK_o,            floatpos,               {.v = " 26x -26y" } }, // ↗
	//{ Mod3Mask,                     XK_j,            floatpos,               {.v = "-26x   0y" } }, // ←
	//{ Mod3Mask,                     XK_l,            floatpos,               {.v = " 26x   0y" } }, // →
	//{ Mod3Mask,                     XK_m,            floatpos,               {.v = "-26x  26y" } }, // ↙
	//{ Mod3Mask,                     XK_comma,        floatpos,               {.v = "  0x  26y" } }, // ↓
	//{ Mod3Mask,                     XK_period,       floatpos,               {.v = " 26x  26y" } }, // ↘
	/* Absolute positioning (allows moving windows between monitors) */
	//{ Mod3Mask|ControlMask,         XK_u,            floatpos,               {.v = "-26a -26a" } }, // ↖
	//{ Mod3Mask|ControlMask,         XK_i,            floatpos,               {.v = "  0a -26a" } }, // ↑
	//{ Mod3Mask|ControlMask,         XK_o,            floatpos,               {.v = " 26a -26a" } }, // ↗
	//{ Mod3Mask|ControlMask,         XK_j,            floatpos,               {.v = "-26a   0a" } }, // ←
	//{ Mod3Mask|ControlMask,         XK_l,            floatpos,               {.v = " 26a   0a" } }, // →
	//{ Mod3Mask|ControlMask,         XK_m,            floatpos,               {.v = "-26a  26a" } }, // ↙
	//{ Mod3Mask|ControlMask,         XK_comma,        floatpos,               {.v = "  0a  26a" } }, // ↓
	//{ Mod3Mask|ControlMask,         XK_period,       floatpos,               {.v = " 26a  26a" } }, // ↘
	/* Resize client, client center position is fixed which means that client expands in all directions */
	//{ Mod3Mask|ShiftMask,           XK_u,            floatpos,               {.v = "-26w -26h" } }, // ↖
	//{ Mod3Mask|ShiftMask,           XK_i,            floatpos,               {.v = "  0w -26h" } }, // ↑
	//{ Mod3Mask|ShiftMask,           XK_o,            floatpos,               {.v = " 26w -26h" } }, // ↗
	//{ Mod3Mask|ShiftMask,           XK_j,            floatpos,               {.v = "-26w   0h" } }, // ←
	//{ Mod3Mask|ShiftMask,           XK_k,            floatpos,               {.v = "800W 800H" } }, // ·
	//{ Mod3Mask|ShiftMask,           XK_l,            floatpos,               {.v = " 26w   0h" } }, // →
	//{ Mod3Mask|ShiftMask,           XK_m,            floatpos,               {.v = "-26w  26h" } }, // ↙
	//{ Mod3Mask|ShiftMask,           XK_comma,        floatpos,               {.v = "  0w  26h" } }, // ↓
	//{ Mod3Mask|ShiftMask,           XK_period,       floatpos,               {.v = " 26w  26h" } }, // ↘
	/* Client is positioned in a floating grid, movement is relative to client's current position */
	//{ Mod3Mask|Mod1Mask,            XK_u,            floatpos,               {.v = "-1p -1p" } }, // ↖
	//{ Mod3Mask|Mod1Mask,            XK_i,            floatpos,               {.v = " 0p -1p" } }, // ↑
	//{ Mod3Mask|Mod1Mask,            XK_o,            floatpos,               {.v = " 1p -1p" } }, // ↗
	//{ Mod3Mask|Mod1Mask,            XK_j,            floatpos,               {.v = "-1p  0p" } }, // ←
	//{ Mod3Mask|Mod1Mask,            XK_k,            floatpos,               {.v = " 0p  0p" } }, // ·
	//{ Mod3Mask|Mod1Mask,            XK_l,            floatpos,               {.v = " 1p  0p" } }, // →
	//{ Mod3Mask|Mod1Mask,            XK_m,            floatpos,               {.v = "-1p  1p" } }, // ↙
	//{ Mod3Mask|Mod1Mask,            XK_comma,        floatpos,               {.v = " 0p  1p" } }, // ↓
	//{ Mod3Mask|Mod1Mask,            XK_period,       floatpos,               {.v = " 1p  1p" } }, // ↘
	{ MODKEY|ControlMask,           XK_minus,      setborderpx,            {.i = -1 } },
	{ MODKEY|ControlMask,           XK_plus,       setborderpx,            {.i = +1 } },
	{ MODKEY|ControlMask,           XK_numbersign, setborderpx,            {.i = 0 } },
	{ MODKEY|ControlMask,           XK_comma,      cyclelayout,            {.i = -1 } },
	{ MODKEY|ControlMask,           XK_period,     cyclelayout,            {.i = +1 } },
	TAGKEYS(                        XK_1,                                  0)
	TAGKEYS(                        XK_2,                                  1)
	TAGKEYS(                        XK_3,                                  2)
	TAGKEYS(                        XK_4,                                  3)
	TAGKEYS(                        XK_5,                                  4)
	TAGKEYS(                        XK_6,                                  5)
	TAGKEYS(                        XK_7,                                  6)
	TAGKEYS(                        XK_8,                                  7)
	TAGKEYS(                        XK_9,                                  8)
};


/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static const Button buttons[] = {
	/* click                event mask           button          function        argument */
	{ ClkLtSymbol,          0,                   Button1,        setlayout,      {0} },
	{ ClkLtSymbol,          0,                   Button3,        layoutmenu,     {0} },
	{ ClkLtSymbol,          0,                   Button4,        cyclelayout,    {.i = +1 },
	{ ClkLtSymbol,          0,                   Button5,        cyclelayout,    {.i = -1 },
	{ ClkWinTitle,          0,                   Button2,        zoom,           {0} },
	{ ClkStatusText,        0,                   Button1,        sigstatusbar,   {.i = 1 } },
	{ ClkStatusText,        0,                   Button2,        sigstatusbar,   {.i = 2 } },
	{ ClkStatusText,        0,                   Button3,        sigstatusbar,   {.i = 3 } },
	{ ClkStatusText,        ShiftMask,	     Button1,        sigstatusbar,   {.i = 4 } },
	{ ClkStatusText,        ShiftMask,	     Button2,        sigstatusbar,   {.i = 5 } },
	{ ClkStatusText,        ShiftMask,	     Button3,        sigstatusbar,   {.i = 6 } },
	{ ClkStatusText,        ControlMask,	     Button1,        sigstatusbar,   {.i = 7 } },
	{ ClkStatusText,        ControlMask,	     Button2,        sigstatusbar,   {.i = 8 } },
	{ ClkStatusText,        ControlMask,	     Button3,        sigstatusbar,   {.i = 9 } },
	{ ClkStatusText,        0,                   Button4,        sigstatusbar,   {.i = 10} },
	{ ClkStatusText,        0,                   Button5,        sigstatusbar,   {.i = 11} },
	{ ClkStatusText,        ShiftMask,           Button4,        sigstatusbar,   {.i = 12} },
	{ ClkStatusText,        ShiftMask,           Button5,        sigstatusbar,   {.i = 13} },
	{ ClkStatusText,        ControlMask,         Button4,        sigstatusbar,   {.i = 14} },
	{ ClkStatusText,        ControlMask,         Button5,        sigstatusbar,   {.i = 15} },
	/* placemouse options, choose which feels more natural:
	 *    0 - tiled position is relative to mouse cursor
	 *    1 - tiled postiion is relative to window center
	 *    2 - mouse pointer warps to window center
	 *
	 * The moveorplace uses movemouse or placemouse depending on the floating state
	 * of the selected client. Set up individual keybindings for the two if you want
	 * to control these separately (i.e. to retain the feature to move a tiled window
	 * into a floating position).
	 */
	{ ClkClientWin,         MODKEY,              Button1,        moveorplace,    {.i = 1} },
	{ ClkClientWin,         MODKEY,              Button2,        togglefloating, {0} },
	{ ClkClientWin,         MODKEY,              Button3,        resizemouse,    {0} },
	{ ClkClientWin,         MODKEY,              Button4,        resizemousescroll, {.v = &scrollargs[0]} },
	{ ClkClientWin,         MODKEY,              Button5,        resizemousescroll, {.v = &scrollargs[1]} },
	{ ClkClientWin,         MODKEY,              Button6,        resizemousescroll, {.v = &scrollargs[2]} },
	{ ClkClientWin,         MODKEY,              Button7,        resizemousescroll, {.v = &scrollargs[3]} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button3,        dragcfact,      {0} },
	{ ClkClientWin,         MODKEY|ShiftMask,    Button1,        dragmfact,      {0} },
	{ ClkTagBar,            0,                   Button1,        view,           {0} },
	{ ClkTagBar,            0,                   Button3,        toggleview,     {0} },
	{ ClkTagBar,            MODKEY,              Button1,        tag,            {0} },
	{ ClkTagBar,            MODKEY,              Button3,        toggletag,      {0} },
};


static const char *ipcsockpath = "/tmp/dwm.sock";
static IPCCommand ipccommands[] = {
	IPCCOMMAND( focusmon, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( focusstack, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incnmaster, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( killclient, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( quit, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setlayoutsafe, 1, {ARG_TYPE_PTR} ),
	IPCCOMMAND( setmfact, 1, {ARG_TYPE_FLOAT} ),
	IPCCOMMAND( setstatus, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( tag, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( tagmon, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( togglebar, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglefloating, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( toggletag, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( toggleview, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( view, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( zoom, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglealttag, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setcfact, 1, {ARG_TYPE_FLOAT} ),
	IPCCOMMAND( cyclelayout, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( explace, 1, {ARG_TYPE_UINT} ),
	IPCCOMMAND( togglehorizontalexpand, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( toggleverticalexpand, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( togglemaximize, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( floatpos, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( fullscreen, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( focusurgent, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( inplacerotate, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( togglehorizontalmax, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( toggleverticalmax, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglemax, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( moveresize, 1, {ARG_TYPE_STR} ),
	IPCCOMMAND( rioresize, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( rotatestack, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( self_restart, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setborderpx, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( shiftboth, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( shifttagclients, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( shiftview, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( shiftviewclients, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( togglesticky, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( togglefullscreen, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( incrgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrigaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrogaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrihgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrivgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrohgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( incrovgaps, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( togglegaps, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( defaultgaps, 1, {ARG_TYPE_NONE} ),
	IPCCOMMAND( setgapsex, 1, {ARG_TYPE_SINT} ),
	IPCCOMMAND( xrdb, 1, {ARG_TYPE_NONE} ),
};
