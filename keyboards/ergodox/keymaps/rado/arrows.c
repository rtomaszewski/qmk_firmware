 /*
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |  4   |      |  MUp |      | 4    |      |           |ctr+y |ctr+y |c_a/ins|PgUp |c_s/Home|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |ctr+a |ctr/ML|sft/MD|alt/MR|alt/F |------|           |------|      | alt  |sft/PgD|ctr/end|      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |ctr+z |ctr+x |ctr+c |ctr+v |ctr+b |      |           |      |      |MousBt1|      |      |MYCHAR|      |
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


 #define C_A_T(kc) MT((MOD_LCTL | MOD_LALT), kc)

//old 4; arrow movments
  [ARROW] = KEYMAP(

    //left
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    HHHHHHH,KC_4,HHHHHHH,KC_UP,HHHHHHH,KC_4,HHHHHHH,
    HHHHHHH,LCTL(KC_A),CTL_T(KC_LEFT),SFT_T(KC_DOWN),ALT_T(KC_RIGHT),LALT(KC_F),
    HHHHHHH,LCTL(KC_Z),LCTL(KC_X),LCTL(KC_C),LCTL(KC_V),LALT(KC_B),HHHHHHH,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH,


    //right
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,
    LCTL(KC_Y),LCTL(KC_Y),C_A_T(KC_INSERT),KC_PGUP,C_S_T(KC_HOME),HHHHHHH,HHHHHHH,
    HHHHHHH,ALT_T(KC_NO),SFT_T(KC_PGDOWN),RCTL_T(KC_END),HHHHHHH,HHHHHHH,
    HHHHHHH,HHHHHHH,KC_MS_BTN1,HHHHHHH,HHHHHHH,TO(MYCHARS),HHHHHHH,
    HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,HHHHHHH,


    HHHHHHH,HHHHHHH,
    HHHHHHH,
    HHHHHHH,TO(BASE),HHHHHHH

    ),