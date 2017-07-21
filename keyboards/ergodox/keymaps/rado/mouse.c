 /*
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |MS A0|MousBt1| MSUp |MousBt2|  6  |      |           |      |  6   |      |MsWUp | Home |MS A0 |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |MS A1 |MSLef |MSDow | MSRig|  6   |------|           |------|  6  |MousBt1|MsWDp |End   |MS A1 |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |ctr+z |ctr+x |ctr+c |ctr+v | 6    |ctr+f |           |      |  6  |MousBt1|MousBt3|MousBt2|MS A2|       |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |MS A1 |                                       |MS A2 |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |BASE  |------|       |------|BASE  |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
 

// mouse movment
  [MOUSE_MOVEMENT] = KEYMAP(

    //left
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    HHHHHHH,KC_MS_ACCEL0,KC_MS_BTN1,KC_MS_UP,KC_MS_BTN2,KC_6,HHHHHHH,
    HHHHHHH,KC_MS_ACCEL1,KC_MS_LEFT,KC_MS_DOWN,KC_MS_RIGHT,KC_6,
    HHHHHHH,LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),KC_6,LCTL(KC_F),
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,KC_MS_ACCEL1,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH,


    //right
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    HHHHHHH,KC_6,HHHHHHH,KC_MS_WH_UP,KC_HOME,KC_MS_ACCEL0,HHHHHHH,
    KC_6,KC_MS_BTN1,KC_MS_WH_DOWN,KC_END,KC_MS_ACCEL1,HHHHHHH,
    HHHHHHH,KC_6,KC_MS_BTN1,KC_MS_BTN3,KC_MS_BTN2,KC_MS_ACCEL2,HHHHHHH,
    KC_MS_ACCEL2,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH

    ),