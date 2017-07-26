 /*
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
   |SFT_ctr/t| ctr/f|ctr+w | MSUp | Home | End  |      |           |      |ctr+y |      |      |      |      |        |
 * |--------+------+------+------+------+------|space |           |      |------+------+------+------+------+--------|
 * |        |ctr+a |ctr/ML|sft/MD|alt/MR|alt+f |------|           |------| BASE |S_FUNC|      |      |      |        |
 * |--------+------+------+------+------+------|Enter|           |      |------+------+------+------+------+--------|
 * | ctr/s  |ctr+z |ctr+x |ctr+c |ctr+v |ctr+b |     |           |MousBt1|     |ARROW |SHIFT |MOUSE |MYCHAR|        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |BASE  |------|       |------|BASE  |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
 

  
// old 8; switch to the all layers 
  [ALL_LAYERS] = KEYMAP(


    //left
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    LSFT(LCTL(KC_T)),LCTL(KC_F),LCTL(KC_W),KC_UP,KC_HOME,KC_END,KC_SPACE,
    HHHHHHH,LCTL(KC_A),CTL_T(KC_LEFT),SFT_T(KC_DOWN),ALT_T(KC_RIGHT),LALT(KC_F),
    LCTL(KC_S),LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),LALT(KC_B),KC_ENTER,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH,



    //right
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    HHHHHHH,LCTL(KC_Y),HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    TO(BASE),TO(SPEC_FUNC),HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    KC_MS_BTN1,HHHHHHH,TO(ARROW),TO(SHIFT_KEYS),TO(MOUSE_MOVEMENT),TO(MYCHARS),HHHHHHH,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,



    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH


    ),
