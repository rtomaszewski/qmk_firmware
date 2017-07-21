#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN
};

#define HHHHHHH KC_TRNS

enum layers {
    BASE=0, // default layer
    ARROW, 
    SHIFT_KEYS, 
    MOUSE_MOVEMENT, 
    ALL_LAYERS, 
    SPEC_FUNC,
    MYCHARS,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

#include "base.c"
#include "arrows.c"
#include "shift.c"
#include "mouse.c"
#include "switch_layers.c"
#include "mychars.c"
#include "special_functions.c"

};

const uint16_t PROGMEM fn_actions[] = {
  [1] = ACTION_LAYER_TAP_TOGGLE(1)
};

// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;
      }
    return MACRO_NONE;
};

// keyboard initialization
void matrix_init_user() {
 // ergodox_led_all_on();
 // for (int i = LED_BRIGHTNESS_HI; i > LED_BRIGHTNESS_LO; i--) {
 //   ergodox_led_all_set(i);
 //   wait_ms(5);
 // }

//    rgblight_enable();
//    rgblight_mode(1);
//    rgblight_setrgb(0x00,0x00,0xff);
//    wait_ms(100);

//  for (int i = LED_BRIGHTNESS_LO; i > 0; i--) {
//    ergodox_led_all_set(i);
//    wait_ms(10);
//  }
  ergodox_led_all_off();
}


/*return:
  true - the original key press will be normally handled by the firmware
  false - the functio below decide what the action should be; no further processing in other funs in the firmware
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    // case KC_ESCAPE:
    //   if (record->event.pressed) {
    //     SEND_STRING ("Test1");
    //   }
    //   return true;
    //   break;

  }
  return true;
}

// LEADER_EXTERNS();
    
void matrix_scan_user(void) {
    // LEADER_DICTIONARY() {
    //   leading = false;
    //   leader_end();

    //   SEQ_ONE_KEY(KC_F) {
    //     register_code(KC_S);
    //     unregister_code(KC_S);
    //   }
    //   SEQ_TWO_KEYS(KC_A, KC_S) {
    //     register_code(KC_H);
    //     unregister_code(KC_H);
    //   }
    //   SEQ_THREE_KEYS(KC_A, KC_S, KC_D) {
    //     register_code(KC_S);
    //     unregister_code(KC_S);
    //   }
    // }

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }

};
