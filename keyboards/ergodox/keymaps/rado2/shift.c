 /*
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |  #   |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  Q   |  W   |  E   |  R   |  T   |      |           |      |  Y   |  U   |  I   |  O   |  P   |        |
 * |--------+------+------+------+------+------|  [   |           | ]    |------+------+------+------+------+--------|
 * |        |   A  |  S   |  D   |  F   |  G   |------|           |------|  H   |  J   |  K   |  L   |  =   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  Z   |  X   |  C   |  V   |   B  |  _   |           |  ;   |  N   |  M   |  ?   |  ,   |MYCHAR|        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      | BASE |------|       |------|MYCHAR|      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
 
// old 5; shift layer
  [SHIFT_KEYS] = KEYMAP(

    //left
    HHHHHHH,HHHHHHH,HHHHHHH,KC_HASH,HHHHHHH,HHHHHHH,HHHHHHH,
    HHHHHHH,RSFT(KC_Q),RSFT(KC_W),RSFT(KC_E),RSFT(KC_R),RSFT(KC_T),KC_LBRACKET,
    HHHHHHH,RSFT(KC_A),RSFT(KC_S),RSFT(KC_D),RSFT(KC_F),RSFT(KC_G),
    HHHHHHH,RSFT(KC_Z),RSFT(KC_X),RSFT(KC_C),RSFT(KC_V),RSFT(KC_B),KC_UNDS,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH,


    //right
    HHHHHHH,HHHHHHH,HHHHHHH,KC_QUOTE,HHHHHHH,HHHHHHH,HHHHHHH,
    KC_RBRACKET,RSFT(KC_Y),RSFT(KC_U),RSFT(KC_I),RSFT(KC_O),RSFT(KC_P),HHHHHHH,
    RSFT(KC_H),LSFT(KC_J),LSFT(KC_K),RSFT(KC_L),KC_EQUAL,HHHHHHH,
    KC_SCOLON,RSFT(KC_N),RSFT(KC_M),KC_QUES,KC_COMMA,OSL(MYCHARS),HHHHHHH,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(MYCHARS),HHHHHHH

    ),