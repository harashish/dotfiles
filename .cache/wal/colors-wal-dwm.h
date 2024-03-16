static const char norm_fg[] = "#b0a4be";
static const char norm_bg[] = "#04060A";
static const char norm_border[] = "#7b7285";

static const char sel_fg[] = "#b0a4be";
static const char sel_bg[] = "#644F5C";
static const char sel_border[] = "#b0a4be";

static const char urg_fg[] = "#b0a4be";
static const char urg_bg[] = "#4D4458";
static const char urg_border[] = "#4D4458";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
