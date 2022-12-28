# My dwm build

This is my dwm build made possible by [bakkeby dwm-flexipatch](https://github.com/bakkeby/dwm-flexipatch),
and [flexipatch-finalizer](https://github.com/bakkeby/flexipatch-finalizer)

List of enabled patches:

- BAR_DWMBLOCKS_PATCH
- BAR_LAYOUTMENU_PATCH
- BAR_LTSYMBOL_PATCH
- BAR_TAGPREVIEW_PATCH
- BAR_STATUS_PATCH
- BAR_STATUSCMD_PATCH
- BAR_SYSTRAY_PATCH
- BAR_TAGS_PATCH
- BAR_UNDERLINETAGS_PATCH
- BAR_WINICON_PATCH
- BAR_WINTITLE_PATCH
- BAR_TITLE_LEFT_PAD_PATCH
- BAR_ALPHA_PATCH
- BAR_ALTERNATIVE_TAGS_PATCH
- BAR_ANYBAR_PATCH
- BAR_ANYBAR_TOP_AND_BOTTOM_BARS_PATCH
- BAR_ANYBAR_MANAGE_WIDTH_PATCH
- BAR_CENTEREDWINDOWNAME_PATCH
- BAR_EXTRASTATUS_PATCH
- BAR_EWMHTAGS_PATCH
- BAR_HIDEVACANTTAGS_PATCH
- BAR_PADDING_PATCH
- BAR_STATUSPADDING_PATCH
- ALT_TAB_PATCH
- ALWAYSCENTER_PATCH
- ASPECTRESIZE_PATCH
- AUTOSTART_PATCH
- CENTER_PATCH
- CENTER_TRANSIENT_WINDOWS_BY_PARENT_PATCH
- CFACTS_PATCH
- COMBO_PATCH
- COOL_AUTOSTART_PATCH
- CYCLELAYOUTS_PATCH
- DRAGCFACT_PATCH
- DRAGMFACT_PATCH
- EXRESIZE_PATCH
- FLOATPOS_PATCH
- FOCUSMASTER_PATCH
- FOCUSURGENT_PATCH
- FULLSCREEN_PATCH
- INPLACEROTATE_PATCH
- MAXIMIZE_PATCH
- MONITOR_RULES_PATCH
- MOVERESIZE_PATCH
- MOVESTACK_PATCH
- NET_CLIENT_LIST_STACKING_PATCH
- NOBORDER_PATCH
- ON_EMPTY_KEYS_PATCH
- PERTAG_PATCH
- PERTAG_VANITYGAPS_PATCH
- PERTAGBAR_PATCH
- PLACEMOUSE_PATCH
- RENAMED_SCRATCHPADS_PATCH
- RESIZECORNERS_PATCH
- RESTARTSIG_PATCH
- RIODRAW_PATCH
- ROTATESTACK_PATCH
- ROUNDED_CORNERS_PATCH
- SAVEFLOATS_PATCH
- SELFRESTART_PATCH
- SETBORDERPX_PATCH
- SHIFTBOTH_PATCH
- SHIFTTAGCLIENTS_PATCH
- SHIFTVIEW_PATCH
- SHIFTVIEW_CLIENTS_PATCH
- STEAM_PATCH
- STICKY_PATCH
- SWALLOW_PATCH
- TAPRESIZE_PATCH
- TOGGLEFULLSCREEN_PATCH
- VANITYGAPS_PATCH
- VANITYGAPS_MONOCLE_PATCH
- VIEWONTAG_PATCH
- XRDB_PATCH
- BSTACK_LAYOUT
- BSTACKHORIZ_LAYOUT
- CENTEREDMASTER_LAYOUT
- CENTEREDFLOATINGMASTER_LAYOUT
- COLUMNS_LAYOUT
- DECK_LAYOUT
- FIBONACCI_DWINDLE_LAYOUT
- FIBONACCI_SPIRAL_LAYOUT
- GAPPLESSGRID_LAYOUT
- GRIDMODE_LAYOUT
- HORIZGRID_LAYOUT
- NROWGRID_LAYOUT
- TILE_LAYOUT
- MONOCLE_LAYOUT

dwm - dynamic window manager
============================
dwm is an extremely fast, small, and dynamic window manager for X.


Requirements
------------
In order to build dwm you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dwm is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dwm (if
necessary as root):

    make clean install


Running dwm
-----------
Add the following line to your .xinitrc to start dwm using startx:

    exec dwm

In order to connect dwm to a specific display, make sure that
the DISPLAY environment variable is set correctly, e.g.:

    DISPLAY=foo.bar:1 exec dwm

(This will start dwm on display :1 of the host foo.bar.)

In order to display status info in the bar, you can do something
like this in your .xinitrc:

    while xsetroot -name "`date` `uptime | sed 's/.*,//'`"
    do
    	sleep 1
    done &
    exec dwm


Configuration
-------------
The configuration of dwm is done by creating a custom config.h
and (re)compiling the source code.
