#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

#define TERM "st"
const char* menu[]      = {"dmrun", 0};
const char* term[]      = {TERM,    0};
const char* calc[]      = {TERM, "-f", "monospace:size=16", "-g", "50x20", "-e", "bc", "-lq", 0};
const char* scrot[]     = {"maim -s $XDG_DESKTOP_DIR/Screenshot-$(date +%s).png && notify-send \\\"Screenshot taken!\\\"", 0};
const char* volup[]     = {"pulsemixer --change-volume +5", 0};
const char* voldown[]   = {"pulsemixer --change-volume -5", 0};
const char* audioplay[] = {"cmus-remote -u",                0};
const char* audiostop[] = {"cmus-remote -s",                0};
const char* audionext[] = {"cmus-remote -n",                0};
const char* audioprev[] = {"cmus-remote -r",                0};
const char* scrlock[]   = {"lockscreen",                    0};
const char* emoji[]     = {"emoji",                         0};
const char* passwds[]   = {"passmenu",                      0};

static struct key keys[] = {
    {MOD|ShiftMask, XK_q,   win_kill,   {0}},
    {MOD,           XK_c,   win_center, {0}},
    {MOD,           XK_f,   win_fs,     {0}},

    {Mod1Mask,           XK_Tab, win_next,   {0}},
    {Mod1Mask|ShiftMask, XK_Tab, win_prev,   {0}},

    {MOD,             XK_d,      run, {.com = menu}},
    {MOD,             XK_Return, run, {.com = term}},
    {MOD,             XK_F12,    run, {.com = calc}},
    {MOD|ShiftMask,   XK_x,      run, {.com = scrlock}},
    {MOD,             XK_grave,  run, {.com = emoji}},
    {MOD|ControlMask, XK_p,      run, {.com = passwds}},

    {0, XK_Print,                   run, {.com = scrot}},
    {0, XF86XK_AudioRaiseVolume,    run, {.com = volup}},
    {0, XF86XK_AudioLowerVolume,    run, {.com = voldown}},
    {0, XF86XK_AudioPlay,           run, {.com = audioplay}},
    {0, XF86XK_AudioStop,           run, {.com = audiostop}},
    {0, XF86XK_AudioNext,           run, {.com = audionext}},
    {0, XF86XK_AudioPrev,           run, {.com = audioprev}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
    {MOD,           XK_6, ws_go,     {.i = 7}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 7}},
};

#endif
