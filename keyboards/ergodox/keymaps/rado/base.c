/* Keymap 0: default layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |  esc   | 1    | 2    | #    |  4   |  5   |  6   |           |  7   |  8   |  9   | "    |  0   |  =   |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |  lgui  |lgui/q|c_s/w |  e   |  r   |  t   |  (   |           |  )   |  y   |  u   |  i   |c_s/o |  p   |app     |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |alt/tab |  a   |ctrl/s|sft/d |alt/f |  g   |------|           |------| h    |alt/j |sft/k |ctr/l |  |   |alt/ente|
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |OSL sft | z    |  x   |  c   | v    |  b   | -    |           | :    |  n   |  m   |  /   |  .   |osl ch|osl fun |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      | del  |ctl/backspe|                                  |ctr/del|     |      |tt fun|mo fun  |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                       |KC_LEAD| met  |       | ALL  |KC_LEAD|
 *                                 ,------|------|------|       |------+------+------.
 *                                 |  to  |      |      |       |      |      |space |
 *                                 |  all |      |------|       |------|      |      |
 *                                 | layer|      |del   |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */

  [BASE] = KEYMAP(

    //left
    KC_ESCAPE,       KC_1,       KC_2,        KC_HASH,       KC_4,            KC_5,         KC_6, 
    KC_LGUI,         LGUI_T(KC_Q),C_S_T(KC_W), KC_E,         KC_R,            KC_T,         KC_LPRN,
    ALT_T(KC_TAB),   KC_A,       CTL_T(KC_S), LSFT_T(KC_D),   ALT_T(KC_F),     KC_G,
    OSL(SHIFT_KEYS), KC_Z,       KC_X,        KC_C,          KC_V,            KC_B,         KC_MINUS,
    HHHHHHH,         HHHHHHH,    HHHHHHH,     KC_DELETE,     CTL_T(KC_BSPACE),


    KC_LSFT,  KC_RSFT, /* MEH_T(KC_NO),*/
    HHHHHHH,
    TO(ALL_LAYERS), HHHHHHH,     KC_DELETE,


    //right
   KC_7,           KC_8,         KC_9,         KC_DQUO,       KC_0,           KC_EQUAL,           HHHHHHH,
   KC_RPRN,        KC_Y,         KC_U,         KC_I,          C_S_T(KC_O),    KC_P,               KC_APPLICATION,
                   KC_H,         ALT_T(KC_J),  RSFT_T(KC_K),   CTL_T(KC_L),    KC_PIPE,            ALGR_T(KC_ENTER),
   //KC_COLN,        KC_N,         KC_M,         KC_SLASH,      KC_DOT,         OSL(MYCHARS),       OSL(SPEC_FUNC),
   KC_COLN,        KC_N,         KC_M,         KC_SLASH,      KC_DOT,         F(0),             F(1),
                           RCTL_T(KC_DELETE),  HHHHHHH,      HHHHHHH,        TT(SPEC_FUNC),      MO(SPEC_FUNC),


   ALL_T(KC_NO),    KC_LEAD,
   HHHHHHH,
   HHHHHHH,         HHHHHHH,    KC_SPACE

   ),