#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[L_SHIFT] = KEYMAP(


/* left hand */
//OSM(MOD_LSFT)

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           KC_ESC,             xxxxxxx,          xxxxxxx,           xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          RSFT(KC_Q),      RSFT(KC_C),           _______,           RSFT(KC_F),          RSFT(KC_S) ,    _______,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
        RSFT(KC_TAB),         RSFT(KC_R),      RSFT(KC_S),          RSFT(KC_T),        RSFT(KC_H),          RSFT(KC_D),       /* - */        
// |-------------------+-------------------+----ct---------------+-------------------+-------------------+-------------------+---------------------|
          _______ ,            _______,          _______,           RSFT(KC_G),        RSFT(KC_P),          RSFT(KC_B),        _______,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          xxxxxxx,              xxxxxxx,          xxxxxxx,          xxxxxxx,           xxxxxxx,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,          xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */           xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                     RSFT(KC_SPACE),        xxxxxxx,            xxxxxxx ,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */
//  OSL( OTHERS L_NUMBERS)
// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,          xxxxxxx,            RSFT(KC_ESC),             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,            _______,           RSFT(KC_L),          _______,          RSFT(KC_U),        _______ ,           xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */              RSFT(KC_M),        RSFT(KC_N),          RSFT(KC_A),       RSFT(KC_I),        RSFT(KC_O),         RSFT(KC_ENTER),      
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,            _______,           RSFT(KC_W),          RSFT(KC_Y),       _______,           _______,            _______, 
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                   xxxxxxx,         xxxxxxx,            xxxxxxx,            xxxxxxx,           xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                xxxxxxx,            xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
               xxxxxxx,           xxxxxxx,           RSFT(KC_E)
 //       `-------------------+------------------+-------------------'
),

#endif

