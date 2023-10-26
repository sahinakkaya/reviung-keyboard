/* Copyright 2020 gtips
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "enums.h"
#include "config.h"
#include "math.h"
#include "print.h"
#include "combo.c"
#include "leader.c"
#include "tap_dance.c"
#include "autocorrect.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    NUM_TAB,   KC_Q,      KC_W,   KC_E,   KC_R,   KC_T,                           KC_Y,   KC_U,      KC_I,   KC_O,           KC_P, KC_LBRC,
    CTRL_ESC,  KC_A,    KC_S,   KC_D,   WM_F,   KC_G,                           KC_H,   WM_J,      KC_K,   KC_L,      KC_SCLN, CTRL_QUOT,
    SHFT_CAPS,  ALT_Z,   KC_X,   KC_C,   KC_V,   KC_B,                           KC_N,   KC_M,   KC_COMM,   KC_DOT,   ALT_SLSH, SHFT_BSLS,
                                            LGUI_TAB,   LOW_SPC,    KC_ENTER,   RSE_BSPC,    RALT_REP
  ),


  [_LOWER] = LAYOUT(
  _______, KC_TILD, _______,   _______,  _______,   KC_PLUS,                      KC_MPLY,  KC_MUTE,   KC_VOLD,  KC_VOLU,  KC_PWR,_______,
  _______, KC_GRV,   _______,   G(KC_MINS), G(KC_EQL), KC_CIRC,                      KC_BRID,  KC_MPRV,   KC_MNXT,  KC_BRIU,   G(S(KC_4)),_______,
  _______, _______, _______,   _______,  _______,   KC_MINS,                      _______,  _______,   _______,  _______,  _______,_______,
                                 _______,   _______,  _______,  _______,   _______

  ),


  [_RAISE] = LAYOUT(
  _______, KC_EXLM,   KC_AT,  KC_HASH,   KC_DLR,   KC_BSLS,                    KC_PIPE,  KC_PGUP,   KC_ASTR,   KC_LBRC,  KC_RBRC,_______,
  _______, KC_AMPR,  KC_PERC,  KC_LPRN,   KC_RPRN, KC_EQL,                     KC_LEFT,   KC_DOWN,   KC_UP,   KC_RIGHT,   TD_QUOT_DQT,_______,
  _______, _______,  _______,   KC_LCBR,   KC_RCBR, KC_MINS,                   KC_UNDS,   KC_PGDN,   KC_HOME,  KC_END,  KC_BSLS,_______,
                                 _______,   _______,  _______,    _______,   _______

  ),

  [_WINDOW_MANAGER] = LAYOUT(
  _______, A(KC_1),   A(KC_2),  A(KC_3),   A(KC_4), A(KC_5),                      A(KC_6),  _______,   _______,   _______,  A(S(KC_ENT)),_______,
  _______, _______,  _______,   _______,  A(KC_F),   _______,                       A(KC_H),  A(KC_J),   A(KC_K),  A(KC_L),   _______,_______,
  _______, _______,  _______,   _______,  _______,   _______,                       _______,  A(KC_M),   A(KC_COMM),  A(KC_DOT),  _______,_______,
                                 _______,   A(KC_TAB),  A(KC_TAB),    A(KC_TAB),   A(KC_ENT)

  ),

  [_MOUSE] = LAYOUT(
  _______, _______,  KC_WH_U,   KC_BTN3,  _______,   RGB_HUD,                       RGB_HUI,  KC_LCTL,   KC_MS_U,   KC_WH_U,  KC_DEL,_______,
  _______, _______,  KC_WH_D,   KC_BTN2,  KC_BTN1,   KC_ACCEL,                       RGB_SAI,  KC_MS_L,   KC_MS_D,   KC_MS_R, KC_ACL0,_______,
  _______, _______,  _______,   _______,  _______,   RGB_VAD,                       RGB_VAI,  KC_WH_D,   KC_WH_L,  KC_WH_R,  KC_ACL1,_______,
                                 _______,   DRG_SCRLL,  _______,    _______,   _______
  ),

  [_NUMPAD] = LAYOUT(
  _______, _______,     KC_2,      KC_3,     KC_4,      KC_5,                       KC_6,     TD_F7,   TD_F8,  TD_F9,  TD_F10,_______,
  _______, _______,  _______,   _______,  _______,    KC_F11,                       KC_PLUS,  TD_F4,   TD_F5,  TD_F6,  KC_MINS,_______,
  _______, _______,  _______,   _______,  _______,    KC_F12,                       KC_ASTR,  TD_F1,   TD_F2,  TD_F3,  KC_SLSH,_______,
                                 _______,   _______,  KC_EQL,    _______,  TD_0_DOT

  ),

  [_ADJUST] = LAYOUT(
    _______, RGB_VAI,   RGB_SAI, RGB_HUI,  RGB_MOD,    RGB_TOG,            DT_PRNT,   DT_DOWN,  DT_UP,  XXXXXXX,     XXXXXXX,_______,
    _______, RGB_VAD,   RGB_SAD, RGB_HUD,  RGB_RMOD,   XXXXXXX,            BALL_HUI, BALL_WHT, BALL_DEC, XXXXXXX,     G(S(KC_4)),_______,
    _______, AC_TOGG,   KC_BTN3, KC_BTN2,  KC_BTN1,    BALL_SCR,           QK_RBT,   QK_BOOT,   EE_CLR,  XXXXXXX,     XXXXXXX,_______,
                              KC_LALT,      _______,  _______,   RAISE,   KC_RGUI
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case SHFT_Z:
            return TAPPING_TERM - 40;
        case SHFT_SLSH:
            return TAPPING_TERM - 60;
        // case LT(1, KC_GRV):
        //     return 130;
        default:
            return TAPPING_TERM;
    }
}

bool remember_last_key_user(uint16_t keycode, keyrecord_t* record,
                            uint8_t* remembered_mods) {
    switch (keycode) {
        case KC_A ... KC_Z:
            *remembered_mods &= ~MOD_MASK_SHIFT;
            break;
        case RALT_REP:
            return false;
    }

    return true;  // Other keys can be repeated.
}

uint8_t mod_state;
extern uint16_t mouse_debounce_timer;
// extern uint8_t white, reg, green, blue;
// static mouse_debounce_timer = 0;
bool process_record_user(uint16_t keycode, keyrecord_t *record){
  mod_state = get_mods();
  switch (keycode){
    case BALL_NCL:
      record->event.pressed?register_code(KC_BTN1):unregister_code(KC_BTN1);
      break;
    case BALL_RCL:
        record->event.pressed?register_code(KC_BTN2):unregister_code(KC_BTN2);
        break;
    case BALL_MCL:
        record->event.pressed?register_code(KC_BTN3):unregister_code(KC_BTN3);
        break;
    case RSE_BSPC:
        {
        // Initialize a boolean variable that keeps track
        // of the delete key status: registered or not?
        static bool delkey_registered;
        if (record->tap.count && record->event.pressed) {
            // Detect the activation of either shift keys
            if (mod_state & MOD_MASK_LSHIFT) {
                // First temporarily canceling both shifts so that
                // shift isn't applied to the KC_DEL keycode
                del_mods(MOD_MASK_LSHIFT);
                register_code(KC_DEL);
                // Update the boolean variable to reflect the status of KC_DEL
                delkey_registered = true;
                // Reapplying modifier state so that the held shift key(s)
                // still work even after having tapped the Backspace/Delete key.
                set_mods(mod_state);
                return false;
            } else if (mod_state & MOD_MASK_RSHIFT){
                register_code(KC_DEL);
                // Update the boolean variable to reflect the status of KC_DEL
                delkey_registered = true;
                return false;

            }
        } else { // on release of KC_BSPC
            // In case KC_DEL is still being sent even after the release of KC_BSPC
            if (delkey_registered) {
                unregister_code(KC_DEL);
                delkey_registered = false;
                return false;
            }
        }
        // Let QMK process the KC_BSPC keycode as usual outside of shift
        return true;
    }
    case LOW_SPC:
        {
        static bool shift_oneshot;
        if (record->tap.count && record->event.pressed) {
            if (mod_state & MOD_MASK_RSHIFT) { // check if shift is held
                del_mods(MOD_MASK_SHIFT);  // unregister shift
                register_code(KC_DOT);     // register a dot
                register_code(KC_SPC);     // register a space
                shift_oneshot = true;
                return false;
            }
        } else { // when space is released
            if (shift_oneshot) {
                unregister_code(KC_SPC);
                shift_oneshot = false;
                set_oneshot_mods(MOD_BIT(KC_LSFT)); // enable one shot shift
                return false;
            }
        }
        // Let QMK process the KC_SPC keycode as usual outside of shift
        return true;
    }
    case RALT_REP:
        {
            static bool ralt_held = false;
            if (record->event.pressed) {
                if (record->tap.count) {
                    add_mods(get_last_mods());
                    tap_code16(get_last_keycode());
                } else {
                    register_mods(MOD_BIT(KC_RALT));
                    ralt_held = true;
                    uprintf("now mods are %2u\n", mod_state);
                }
            } else {
                if (ralt_held) {
                    uprintf("i am here, mods are %2u\n", mod_state);
                    unregister_mods(MOD_BIT(KC_RALT));
                    uprintf("now mods are %2u\n", mod_state);
                } else {

                    del_mods(get_last_mods());
                }
            }
            return false;
        }
        default:
            mouse_debounce_timer  = timer_read();
            break;
    }
  return true;
}


// Light LEDs 6 to 9 and 12 to 15 red when caps lock is active. Hard to ignore!
const rgblight_segment_t PROGMEM my_capslock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 5, HSV_RED},       // Light 4 LEDs, starting with LED 6
    {5, 5, HSV_BLUE}       // Light 4 LEDs, starting with LED 12
);

// Light LEDs 9 & 10 in cyan when keyboard layer 1 is active
const rgblight_segment_t PROGMEM my_layer1_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_CYAN}
);


// Light LEDs 11 & 12 in purple when keyboard layer 2 is active
const rgblight_segment_t PROGMEM my_layer2_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_PURPLE}
);
// Light LEDs 13 & 14 in green when keyboard layer 3 is active
const rgblight_segment_t PROGMEM my_layer3_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {1, 2, HSV_GREEN}
);

// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    my_capslock_layer,
    my_layer1_layer,    // Overrides caps lock layer
    my_layer2_layer,    // Overrides other layers
    my_layer3_layer     // Overrides other layers
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

