
//this is a copy of the standard keyborad with some of mine modifications i did in "rado" keyborad keymap.

  [BASE_RADO] = KEYMAP(

    //left
    KC_GESC,       KC_1,       KC_2,        KC_HASH,       KC_4,            KC_5,         KC_6, 
    KC_LGUI,         LGUI_T(KC_Q),C_S_T(KC_W), KC_E,         KC_R,            KC_T,         KC_LPRN,
    ALT_T(KC_TAB),   KC_A,       CTL_T(KC_S), LSFT_T(KC_D),   ALT_T(KC_F),     KC_G,
    OSL(SHIFT_KEYS), KC_Z,       KC_X,        KC_C,          KC_V,            KC_B,         KC_MINUS,
    xxxxxxx,         xxxxxxx,    xxxxxxx,     KC_DELETE,     CTL_T(KC_BSPACE),


   F(2),  KC_RSFT, /* MEH_T(KC_NO),*/
    xxxxxxx,
    TO(ALL_LAYERS), xxxxxxx,     KC_DELETE,


    //right
   KC_7,           KC_8,         KC_9,         KC_DQUO,       KC_0,           KC_EQUAL,           xxxxxxx,
   KC_RPRN,        KC_Y,         KC_U,         KC_I,          C_S_T(KC_O),    KC_P,               KC_APPLICATION,
                   KC_H,         ALT_T(KC_J),  RSFT_T(KC_K),   CTL_T(KC_L),    KC_PIPE,            ALGR_T(KC_ENTER),
   //KC_COLN,        KC_N,         KC_M,         KC_SLASH,      KC_DOT,         OSL(MYCHARS),       OSL(SPEC_FUNC),
   KC_COLN,        KC_N,         KC_M,         KC_SLASH,      KC_DOT,         F(0),             F(1),
                           RCTL_T(KC_DELETE),  xxxxxxx,      xxxxxxx,        TT(SPEC_FUNC),      MO(SPEC_FUNC),


   RESET,    KC_LEAD,
   xxxxxxx, //DEBUG,
   xxxxxxx,         xxxxxxx,    KC_SPACE

   ),