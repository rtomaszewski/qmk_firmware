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

#define S_KC_Z 1
#define S_KC_V 2         
#define S_KC_X 3
#define S_KC_Q 4
#define S_KC_J 5
#define S_KC_K 6

  /*
 c:8207 shifh
  */
#define  keycode_r_shift 8207  
#define  keycode_l_ctrl 8209
#define  keycode_r_ctrl 8210

enum layers {
    BASE=0, // default layer
    BASE_MALTRON=0,
    BASE_DVORAK=0,
//    BASE_RSTHD=0,
    BASE_RADO2=0,
//    BASE_BOTTOM_ROW,
    L_SHIFT, 
    BASE_RADO2_BOTH,
    BASE_RADO2_DUPLICATE_L,
    BASE_RADO2_DUPLICATE_R,
    BASE_RADO2_LEFT,
    BASE_RADO2_RIGHT,
    L_ARROWS,   
    L_ARROWS_DUPLICATE,  
    // L_ARROWS3_A,
    // L_ARROWS3_B,
    L_ARROWS_BASH, 
    L_ARROWS_BASH2,
    L_ARROWS2, 

    // OTHERS,
    L_F1,
    L_NUMBERS,

    ARROW, 
    SHIFT_KEYS, 
    MOUSE_MOVEMENT, 
    ALL_LAYERS, 
    SPEC_FUNC,
    MYCHARS,
};

enum functions_numbers {
  FDEBUG=0, //  //DEBUG,
  TEST2,
  FNONE,
  TEST,
  M_EXAMPLE, 
  M_COMMA,
  M_KC_LPRN,
  M_KC_LCBR, 
  M_KC_LBRACKET, 
  M_KC_DQUO,
  M_KC_QUOTE,         
  M_KC_SPACE, 

  F_EXAMPLE, 

  F_SHIFT, 
  F_RIGHT,
  F_LEFT, 

  F_CONTROL, 
  F_CONTROL_L, 
  F_CONTROL_R, 
};

//Tap Dance Declarations
enum {
  TD_ESC_CAPS = 0,
  TD_ENTER_SPACE,
  CT_SWITCH_1, 
  TD_KEY_PASTE, 
  TD_KEY_COPY, 
};


qk_tap_dance_action_t tap_dance_actions[] = {
  //Tap once for Esc, twice for Caps Lock
  [TD_ESC_CAPS]      = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
  [TD_ENTER_SPACE]   = ACTION_TAP_DANCE_DOUBLE(KC_SPACE, KC_ENTER),
  [CT_SWITCH_1]      = ACTION_TAP_DANCE_DUAL_ROLE(KC_K,1),         // "k" of tg(1) layer
  [TD_KEY_COPY]      = ACTION_TAP_DANCE_DOUBLE(KC_G,LCTL(KC_C)),          // 
  [TD_KEY_PASTE]     = ACTION_TAP_DANCE_DOUBLE(KC_C,LCTL(KC_V)),          // 
  
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

//#include "base.c"
// #include "base_maltron.c"
//#include "base_dvorak.c"
// #include "base_rsthd.c"
//#include "base_bottom_row.c"

#include "base_rado2.c"
#include "layer_shift.c" 
#include "base_rado2_both.c"
//#include "base_rado2_duplicate_left.c"
//#include "base_rado2_duplicate_right.c"
#include "base_rado2_left.c"
#include "base_rado2_right.c"
//#include "others.c"
#include "layer_arrows.c"
#include "layer_arrows_duplicate.c"
#include "layer_arrows_bash.c"
#include "layer_arrows2.c"
// #include "layer_arrows_bash2.c"
// #include "layer_arrows3a.c"
// #include "layer_arrows3b.c"

// #include "layer_f1.c"
// #include "layer_numbers.c"

// #include "arrows.c"
// #include "shift.c"
// #include "mouse.c"
// #include "switch_layers.c"
// #include "mychars.c"
// #include "special_functions.ffc"

};

const uint16_t PROGMEM fn_actions[] = {
  [FDEBUG]           = ACTION_FUNCTION(FDEBUG),  
  [F_SHIFT]          = ACTION_FUNCTION(F_SHIFT),  
  [F_RIGHT]          = ACTION_FUNCTION(F_RIGHT),  
  [F_LEFT]           = ACTION_FUNCTION(F_LEFT),  

  // [F_CONTROL]        = ACTION_FUNCTION(F_CONTROL),
  [F_CONTROL_L]        = ACTION_FUNCTION(F_CONTROL_L),
  [F_CONTROL_R]        = ACTION_FUNCTION(F_CONTROL_R),

//  [TEST2]            = ACTION_FUNCTION(TEST2),                   // ok

  //[TEST2] = ACTION_LAYER_ONESHOT(1),
//  [TEST2] = ACTION_LAYER_MOMENTARY(1),
//  [TEST2] = ACTION_MODS_TAP_KEY(MOD_RGUI, KC_G),    //ok
//  [TEST2] = ACTION_LAYER_TAP_TOGGLE(MOD_RGUI, KC_G),    
};

//static uint8_t layer_mychars = 0;
//static uint8_t layer_mychars_release = 0;

static uint8_t  key_counter = 0;
static uint8_t  f_mymods= 0;
static uint8_t  f_mymods_copy= 0;

static uint8_t  f_shift_key_counter = 0;
static uint8_t  f_shift_on = 0;
static uint16_t f_shift_timer = 0;


static uint8_t  f_ctrl_on = 0;
static uint16_t f_ctrl_timer = 0;
static uint8_t  f_ctrl_key_counter = 0;
static uint8_t  f_ctrl_double_tap = 0;
static uint8_t  f_ctrl_layer = 0;
 
//static uint8_t  f_ctrl_up_key = 0;


static uint8_t mylayer = 0;
//static uint8_t f_shift_left_righ_layer = 0;

void tap(uint16_t key) {
  register_code(key); 
  unregister_code(key);   
}

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
// static uint8_t mods_pressed;
//  static bool mod_flag;

//      uint8_t mymods = ; 
  
  //uprintf("\naction %d opt %d\n", id, opt);

  switch (id) { 
  
/*  
  case F_EXAMPLE:
      print("\nTEST2 1\n");
      if (record->event.pressed) {
        print("\nTEST2 2\n");
      } else {
        print("\nTEST2 3\n");
      }
      break; 
*/
    case F_SHIFT:
      uprintf("** sft %u 1 ", timer_read());
      if (record->event.pressed) {
        uprint("2s\n");

        f_shift_on=1;
        f_shift_timer=timer_read();
        f_shift_key_counter=key_counter;

        layer_on(L_SHIFT);
        set_oneshot_layer(L_SHIFT, ONESHOT_START);

      } else {
        uprint("3s\n");
        // if ( f_shift_on ) 
        clear_oneshot_layer_state(ONESHOT_PRESSED);        
      }
      break; 

// ----------------------------------------------------------------------
    case F_CONTROL_L:
      f_ctrl_layer = L_ARROWS_BASH;

    case F_CONTROL_R:

      uprintf("** ctr %u 1 ", timer_read());
 
      if ( ! f_ctrl_layer ) {
        f_ctrl_layer = L_ARROWS;
      }

      if (record->event.pressed) {
        uprint("2c\n");

        if ( f_ctrl_on &&
             timer_elapsed (f_ctrl_timer) < TAPPING_TERM
        ){
          uprint("4c\n");

          f_ctrl_double_tap = 1;
          f_ctrl_key_counter=key_counter;

          clear_oneshot_mods();
          unregister_mods(f_mymods_copy);

          layer_invert( f_ctrl_layer );

        } else {
      //    f_ctrl_up_key = 0;
          f_ctrl_on=1;
          f_ctrl_timer=timer_read();
          f_ctrl_key_counter=key_counter;

          f_mymods |= MOD_LCTL;
          set_oneshot_mods(f_mymods);
          f_mymods_copy = f_mymods;
          f_mymods = 0;
        }
      } else {
        // f_mymods = 0;
    //    f_ctrl_up_key += 1;
        uprint("3c\n");

        if ( f_ctrl_double_tap && 
             ( f_ctrl_key_counter != key_counter )
        ) {
          layer_invert( f_ctrl_layer );
        }

        f_ctrl_double_tap=0;
        f_ctrl_layer = 0;

      }
      break; 

// ----------------------------------------------------------------------
    case F_LEFT:
      print("l 1\n");
      mylayer=BASE_RADO2_LEFT;

    case F_RIGHT:
      if ( ! mylayer) {
        mylayer=BASE_RADO2_RIGHT; 
      }
      print("r 1\n");

      if (record->event.pressed) {
        print("r 2\n");

        if ( f_shift_on && 
             (1 == (key_counter - f_shift_key_counter)) 
        ) {
          print("shift_on\n");
          f_shift_on = 0;
          layer_clear();
          layer_on(BASE_RADO2);
          reset_oneshot_layer();
          clear_oneshot_mods();
          clear_oneshot_locked_mods();

          set_oneshot_mods (MOD_LSFT);
        } else {
          f_shift_on = 0;
        }

        if ( f_ctrl_on ) {
           print("ctrl_on\n");
           set_oneshot_mods(f_mymods_copy); 
        }

        layer_on(mylayer);
        set_oneshot_layer(mylayer, ONESHOT_START);
        mylayer=0;

      } else {
        print("r 3\n");
        mylayer=0;
        clear_oneshot_layer_state(ONESHOT_PRESSED);        
      }
      break; 

// ----------------------------------------------------------------------


/*
    case F_LEFT:
      print("left ctrl 1\n");
      mylayer=BASE_RADO2_LEFT;

    case F_RIGHT:
      if ( ! mylayer) {
        mylayer=BASE_RADO2_RIGHT; 
      }
      print("rrreight 1\n");

      if (record->event.pressed) {
        print("rrreight 2\n");

        if ( f_shift_on && \
            (1 == (key_counter - f_key_counter)) )
        {
          print("rrreight shift_on\n");
          f_shift_on = 0;
          layer_clear();
          layer_on(BASE_RADO2);
          reset_oneshot_layer();
          clear_oneshot_locked_mods();

          set_oneshot_mods (MOD_LSFT);
        } else {
          f_shift_on = 0;
        }

        layer_on(mylayer);
        set_oneshot_layer(mylayer, ONESHOT_START);
        mylayer=0;

      } else {
        print("rrreight 3\n");
        mylayer=0;
        clear_oneshot_layer_state(ONESHOT_PRESSED);        
      }
      break; 
*/

    case FDEBUG:
       if (record->event.pressed) {
        debug_enable = !debug_enable;
/*
        if (debug_enable) {
          print("\ndebug: on\n");
        } else {
          print("\ndebug: off\n");
        }
        */
      }
      break; 

/*
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
*/

  }
}


/*return:
  true - the original key press will be normally handled by the firmware
  false - the functio below decide what the action should be; no further processing in other funs in the firmware
*/
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  //uint16_t aux_keycode=keycode & 0x00ff;
 // uprintf("** record %d %d %d\n", layer_mychars, keycode, aux_keycode);

  // uprintf("(");
  // default_layer_debug();
  // uprintf(")\n");

  // uprintf("(");
  // debug_record(*record);
  // uprintf(")\n");

// counts key presses 
  if ( record->event.pressed) {
    key_counter += 1;
    uprintf("** key t:%u c=%u:%d k_nr %d k_s %d k_c %d\n", 
      timer_read(), keycode, record->tap.count, key_counter, f_shift_key_counter, f_ctrl_key_counter);
  } else {
    uprintf("** key t:%u c=%u:%d k_nr %d k_s %d k_c %d up\n", 
      timer_read(), keycode, record->tap.count, key_counter, f_shift_key_counter, f_ctrl_key_counter);
  }
  

  if ( f_shift_on && 
      (f_shift_key_counter != key_counter) && 
      ( (keycode_l_ctrl == keycode) || ( keycode_r_ctrl == keycode ))
  ) {
    uprint( "shift\n" );
    f_mymods |= MOD_LSFT;
    f_shift_on = 0;
    layer_clear();
    layer_on(BASE_RADO2);
    reset_oneshot_layer();
    clear_oneshot_mods();
    clear_oneshot_locked_mods();
  }

  // if ( f_ctrl_on && (f_ctrl_key_counter == key_counter)) {
  //    uprint( "ctrl up\n" );
    
  //    return false;
  // }


  // if ( f_ctrl_up_key > 1 ) { 
  //   uprint( "up key\n" );
  //   return false;
  // }

  return true;
}


// leaving this in place for compatibilty with old keymaps cloned and re-compiled.
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
      switch(id) {

/*
        case M_EXAMPLE:
          if (record->event.pressed) {
            return MACRO( T(KP_0), D(KP_0), END );
          } else {
            return MACRO( U(KP_0), END );
          }
*/
        case M_COMMA:
          if (record->event.pressed) {
            SEND_STRING(", ");
          }
          break;

        case M_KC_LPRN:
          if (record->event.pressed) {
             return MACRO( D(LSFT), T(9), T(0), U(LSFT), T(LEFT), END );
            //return MACRO( T(LBRACKET), T(RBRACKET), T(LEFT), END ); LSFT(KC_9)
          }         
          break; 
      
        case M_KC_LCBR:
          if (record->event.pressed) {
             return MACRO( D(LSFT), T(LBRC), T(RBRC), U(LSFT), T(LEFT), END );
          }
          break; 

        case M_KC_LBRACKET:
          if (record->event.pressed) {
             return MACRO( T(LBRC), T(RBRC), T(LEFT), END );
          }
          break; 

        case M_KC_DQUO:
          if (record->event.pressed) {
             return MACRO( D(LSFT), T(QUOT), T(QUOT), U(LSFT), T(LEFT), END );
          }        
          break; 

        case M_KC_QUOTE:
          if (record->event.pressed) {
             return MACRO( T(QUOT), T(QUOT), T(LEFT), END );
          }  
          break; 
      
        case M_KC_SPACE:
          if (record->event.pressed) {
             return MACRO( T(SPACE), T(SPACE), T(LEFT), END );
          }  
          break; 
/*
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
*/          
      }

    return MACRO_NONE;
};

// keyboard initialization
void matrix_init_user() {

  f_shift_on = 0;
  mylayer = 0;
  f_shift_timer = 0;
  key_counter = 0;
  f_shift_key_counter = 0;
 // f_shift_left_righ_layer = 0;

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

  if (f_shift_timer && timer_elapsed (f_shift_timer) > (2*TAPPING_TERM)) {
    f_shift_timer=0;
    f_shift_on=0;
    // uprintf("** key %u zero sft\n", timer_read());
  }


  if ( f_ctrl_timer && timer_elapsed (f_ctrl_timer) > (2*TAPPING_TERM) ) {
    f_ctrl_timer=0;
    f_ctrl_on=0;
    // uprintf("** key %u zero ctrl\n", timer_read());
  }


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
