
#ifndef MY_ENUMS_H
#define MY_ENUMS_H


enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _NUMPAD
};


enum custom_keycodes {
  BALL_HUI = SAFE_RANGE, //cycles hue
  BALL_WHT,              //cycles white
  BALL_DEC,              //decreased color
  BALL_SCR,              //scrolls
  BALL_NCL,              //left click
  BALL_RCL,              //right click
  BALL_MCL,              //middle click
  REP
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

#define NUMPAD MO(_NUMPAD)
#define WM MO(_WINDOW_MANAGER)
#define ADJUST MO(_ADJUST)


#define LOW_SPC     LT(_LOWER, KC_SPC)
#define RSE_BSPC    LT(_RAISE, KC_BSPC)
#define WM_F    LGUI_T(KC_F)
#define WM_J    LGUI_T(KC_J)


#define NUM_TAB LT(NUMPAD, KC_TAB)
#define CTRL_ESC LCTL_T(KC_ESC)
#define CTRL_QUOT LCTL_T(KC_QUOT)
#define SHFT_CAPS LSFT_T(KC_CAPS)
#define SHFT_BSLS RSFT_T(KC_BSLS)
#define ALT_Z LALT_T(KC_Z)
#define ALT_SLSH LALT_T(KC_SLSH)
#define RALT_ENT RALT_T(KC_ENT)
#define RALT_REP LT(0, REP)
#define LGUI_TAB LGUI_T(KC_TAB)

#endif
