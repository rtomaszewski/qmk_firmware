

#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[BASE_DVORAK] = KEYMAP(


/* left hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
            KC_GESC,          xxxxxxx,           xxxxxxx,          _______,             xxxxxxx,            xxxxxxx,            xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
//            xxxxxxx,          _______,       C_S_T(_______),      S_A_T(xxxxxxx),      A_C_T(KC_P),          KC_Y,              _______,          
              xxxxxxx,          _______,      _______,               _______,            A_C_T(KC_P),          KC_Y,              _______,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
      ALT_T(KC_TAB),          KC_A,            CTL_T(KC_O),        LSFT_T(KC_E),       ALT_T(KC_U),          KC_I,              /* - */        
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______,           KC_Q,               KC_J,               KC_K,               KC_X,              _______,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            LALT(KC_TAB),     xxxxxxx,            xxxxxxx,          KC_DELETE,        CTL_T(KC_BSPACE),       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,          F(FDEBUG),       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */           xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                          _______,          xxxxxxx,           xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'




/* right hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,          xxxxxxx,               _______,            xxxxxxx,           xxxxxxx,           xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            _______,            KC_F,          A_C_T(KC_G),        S_A_T(KC_C),         C_S_T(KC_R),            KC_L,            xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */               KC_D,          ALT_T(KC_H),        RSFT_T(KC_T),        CTL_T(KC_N),            KC_S,         ALGR_T(KC_ENTER),     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            _______,            KC_B,            KC_M,                 KC_W,               KC_V,               KC_Z,             xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                              RCTL_T(KC_DELETE),       xxxxxxx,            xxxxxxx,            xxxxxxx,          xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                RESET,            xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           xxxxxxx,          KC_SPACE      
 //       `-------------------+------------------+-------------------'


),

#endif