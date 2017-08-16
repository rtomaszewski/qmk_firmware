#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "version.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
};

#define RADO_KC
#define _______ KC_TRNS
#define XXXXXXX KC_NO
#define xxxxxxx KC_NO

enum layers {
    BASE=0, // default layer
    BASE_MALTRON=0,
    BASE_DVORAK=0,
    BASE_RSTHD=0,
    BASE_RADO=1,
    BASE_BOTTOM_ROW,
    BASE_RADO2_BOTH,
    BASE_RADO2_LEFT,
    BASE_RADO2_RIGHT,

    OTHERS,
    ARROW, 
    SHIFT_KEYS, 
    MOUSE_MOVEMENT, 
    ALL_LAYERS, 
    SPEC_FUNC,
    MYCHARS,
};

enum functions_numbers {
  FDEBUG=0, //  //DEBUG,
  FNONE,
  TEST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//#include "base.c"
// #include "base_maltron.c"
//#include "base_dvorak.c"
// #include "base_rsthd.c"
//#include "base_bottom_row.c"

#include "base_rado2.c"
#include "base_rado2_left.c"
#include "base_rado2_right.c"
#include "base_rado2_both.c"
#include "others.c"

// #include "arrows.c"
// #include "shift.c"
// #include "mouse.c"
// #include "switch_layers.c"
// #include "mychars.c"
// #include "special_functions.c"

};

const uint16_t PROGMEM fn_actions[] = {
  [FDEBUG] = ACTION_FUNCTION(FDEBUG),  
  [1] = ACTION_FUNCTION(1),
  [2] = ACTION_FUNCTION(2),
};

static uint8_t layer_mychars = 0;
static uint8_t layer_mychars_release = 0;

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
// static uint8_t mods_pressed;
//  static bool mod_flag;
  
  uprintf("%d action\n", id);

  switch (id) { 

    case FNONE:
      if (record->event.pressed) {
        uprintf("%d a pressed\n", id);
        layer_mychars=1;
        layer_mychars_release=0;
        layer_on (MYCHARS);
      } else {
        uprintf("%d a release\n", id);
        layer_mychars_release=1;
      }
      break;

    case FDEBUG:
       if (record->event.pressed) {
        debug_enable = !debug_enable;
        if (debug_enable) {
          print("\ndebug: on\n");
        } else {
          print("\ndebug: off\n");
        }
      }
      break; 

  }
}


/*return:
  true - the original key press will be normally handled by the firmware
  false - the functio below decide what the action should be; no further processing in other funs in the firmware
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint16_t aux_keycode=keycode & 0x00ff;
  // uprintf("record %d %d %d\n", layer_mychars, keycode, aux_keycode);

  // uprintf("(");
  // default_layer_debug();
  // uprintf(")\n");

  // uprintf("(");
  // debug_record(*record);
  // uprintf(")\n");


  if (layer_mychars==1 ) {
    switch (aux_keycode) {
      case KC_0:
      case KC_1:
      case KC_2:
      case KC_3:
      case KC_4:
      case KC_5:
      case KC_6:
      case KC_7:
      case KC_8:
      case KC_9:
        if (record->event.pressed) {
          // uprintf("r pressed\n");
          register_code(keycode);
          send_keyboard_report();
        } else {
          // uprintf("r release\n");
          unregister_code(keycode);
          if ( layer_mychars_release ) {
            layer_mychars_release=0;
            layer_mychars=255;
            layer_off(MYCHARS);
            layer_on (BASE);
          }

          send_keyboard_report();
        }

       // return false;
    } //switch

  } else if (layer_mychars == 255 ) {
    layer_mychars=0;
    // uprintf("exit layer, release key catching\n");
  } else {
    // uprintf("rrr\n");
    switch (keycode) {
      // dynamically generate these.
      case 1:
        if (record->event.pressed) {
               break;
        }
        return false;
        break;

    } //switch
  } //else

  return true;
}


// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {
        case 0:
        if (record->event.pressed) {
          SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
        }
        break;

        case TEST:
        // Sends Alt+Shift on both key down and key up. 
        // Fesigned to switch between two keyboard layouts on Windows using a locking switch.
        // Does nothing if right shift is pressed for easier resync.
          if ( ! (get_mods() & MOD_BIT(KC_RSFT)) )  {
            uprintf("b before %d", id);
            return MACRO(D(LCTRL), T(LSFT), U(LCTRL), END);
            uprintf("b after %d", id);
          } else {
            uprintf("b none %d", id);
            return MACRO_NONE;
          }
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