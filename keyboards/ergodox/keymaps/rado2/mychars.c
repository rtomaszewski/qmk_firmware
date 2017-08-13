
 /*
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |    ~   |      |      |  #   |      |      |  `   |           |      |      |      |  "   |      |      |   \    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |    |   |   !  |   @  |  $   |  [   |  {   |  (   |           |  )   |  }   |  ]   |   '  |  _   |  ?   |   ;    |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   5  |   4  |  3   |  2   |  1   |------|           |------|   6  |  7   |  8   |  9   |  0   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |   ^    |   *  |  /   |  -   |  +   |  =   |  <   |           |  >   |  ,   |  :   |  %   |  .   |9     |   &    |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |  h   |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |BASE  |------|       |------|SHIFT |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
 


// old 14; all shift chars like .,-: etc.
  [MYCHARS] = KEYMAP(

    //left
    KC_TILD,HHHHHHH,HHHHHHH,KC_HASH,HHHHHHH,HHHHHHH,KC_GRAVE,
    KC_PIPE,KC_EXLM,KC_AT,KC_DLR,KC_LBRACKET,KC_LCBR,KC_LPRN,
    HHHHHHH,KC_5,CTL_T(KC_4),SFT_T(KC_3),ALT_T(KC_2),KC_1,
    KC_CIRC,KC_ASTR,KC_SLASH,KC_MINUS,KC_PLUS,KC_EQUAL,KC_LABK,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,



    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH,



    //right
    HHHHHHH,HHHHHHH,HHHHHHH,KC_DQUO,HHHHHHH,HHHHHHH,KC_BSLASH,
    KC_RPRN,KC_RCBR,KC_RBRACKET,KC_QUOTE,KC_UNDS,KC_QUES,KC_SCOLON,
    KC_6,ALT_T(KC_7),SFT_T(KC_8),CTL_T(KC_9),KC_0,HHHHHHH,
    KC_RABK,KC_COMMA,KC_COLN,KC_PERC,KC_DOT,KC_9,KC_AMPR,
    HHHHHHH,HHHHHHH,HHHHHHH,KC_H,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(SHIFT_KEYS),HHHHHHH

    ),
