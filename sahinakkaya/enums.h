
#ifndef MY_ENUMS_H
#define MY_ENUMS_H


enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST,
    _WINDOW_MANAGER,
    _MOUSE,
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
  REP,
  KC_ACCEL
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

enum tap_dance {
  _TD_F1,
  _TD_F2,
  _TD_F3,
  _TD_F4,
  _TD_F5,
  _TD_F6,
  _TD_F7,
  _TD_F8,
  _TD_F9,
  _TD_F10,
  _TD_F11,
  _TD_F12,
  _TD_0_DOT,
  _TD_A_ESC,
  _TD_QUOT_DQUOT,
  _TD_Q_ESC
};


#define TD_F1 TD(_TD_F1)
#define TD_F2 TD(_TD_F2)
#define TD_F3 TD(_TD_F3)
#define TD_F4 TD(_TD_F4)
#define TD_F5 TD(_TD_F5)
#define TD_F6 TD(_TD_F6)
#define TD_F7 TD(_TD_F7)
#define TD_F8 TD(_TD_F8)
#define TD_F9 TD(_TD_F9)
#define TD_F10 TD(_TD_F10)
#define TD_F11 TD(_TD_F11)
#define TD_F12 TD(_TD_F12)
#define TD_0_DOT TD(_TD_0_DOT)
#define TD_A_ESC TD(_TD_A_ESC)
#define TD_Q_ESC TD(_TD_Q_ESC)
#define TD_QUOT_DQT TD(_TD_QUOT_DQUOT)


#define NAV_LEFT LT(0, KC_LEFT)     // tap: left  | long-tap: beginning of line
#define NAV_UP LT(0, KC_UP)         // tap: up    | long-tap: beginning of document
#define NAV_DOWN LT(0, KC_DOWN)     // tap: down  | long-tap: end of document
#define NAV_RIGHT LT(0, KC_RIGHT)   // tap: right | long-tap: end of line

#define MOD_MASK_LSHIFT MOD_BIT(KC_LSFT)
#define MOD_MASK_RSHIFT MOD_BIT(KC_RSFT)
#define DRG_SCRLL LT(0, KC_BTN1)   // tap: mouse click | long-tap: mouse scroll

#endif
