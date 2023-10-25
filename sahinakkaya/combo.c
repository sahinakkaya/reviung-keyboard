#include QMK_KEYBOARD_H
#include "enums.h"

enum combos {
  ESC,
  DEL,
  // LGUI,
  // RGUI,
  TAB,
  ENT,
  CAPS,
  CUT,
  COPY,

  PASTE
};

// ZV 	Copy
// CV 	Paste
// XV 	Cut

// const uint16_t PROGMEM c_tab[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM c_del[] = {KC_O, KC_P, COMBO_END};
// const uint16_t PROGMEM c_lcmd[] = {TR_R, TR_S, COMBO_END};
// const uint16_t PROGMEM c_rcmd[] = {TR_E, TR_IDOT, COMBO_END};
const uint16_t PROGMEM c_esc[] = {WM_J, KC_K, COMBO_END};
// const uint16_t PROGMEM c_enter[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM c_caps[] = {SHFT_Z, SHFT_SLSH, COMBO_END};
// const uint16_t PROGMEM c_copy[] = {SHFT_Z, KC_V, COMBO_END};
// const uint16_t PROGMEM c_paste[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM c_cut[] = {KC_X, KC_V, COMBO_END};
// const uint16_t PROGMEM c_tr_s[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM c_tr_c[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM c_tr_u[] = {KC_U, KC_J, COMBO_END};
// const uint16_t PROGMEM c_tr_i[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM c_tr_o[] = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM c_tr_g[] = {KC_C, KC_V, COMBO_END};


combo_t key_combos[] = {
  // [TAB]  = COMBO(c_tab, KC_TAB),
  [DEL]  = COMBO(c_del, KC_DEL),
  // [LGUI] = COMBO(c_lcmd, KC_LGUI),
  // [RGUI] = COMBO(c_rcmd, KC_LGUI),
  [ESC]  = COMBO(c_esc, KC_ESC),
  // [ENT]  = COMBO(c_enter, KC_ENT),
  [CAPS] = COMBO(c_caps, KC_CAPS),
  // [CUT] = COMBO(c_cut, G(KC_X)),
  // [COPY] = COMBO(c_copy, G(KC_C)),
  // [PASTE] = COMBO(c_paste, G(KC_V)),
  // [TR_S] = COMBO(c_tr_s, RALT_T(KC_S)),
  // [TR_C] = COMBO(c_tr_c, RALT_T(KC_C)),
};
