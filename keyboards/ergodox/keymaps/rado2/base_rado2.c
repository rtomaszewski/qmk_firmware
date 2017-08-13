


#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[BASE_RSTHD] = KEYMAP(


/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
            KC_GESC,         xxxxxxx,             xxxxxxx,          _______,             xxxxxxx,            xxxxxxx,          xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         _______,           C_S_T(KC_C),   OSL(BASE_RADO2_LEFT),    A_C_T(KC_F),         _______,          _______,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
LT(BASE_RADO2_RIGHT ,KC_TAB),    KC_R,            CTL_T(KC_S),        LSFT_T(KC_T),       ALT_T(KC_H),          KC_D,              /* - */        
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         _______,             OSL(OTHERS),             KC_G,               KC_P,              KC_B,            _______,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
   OSL(BASE_RADO2_LEFT),      xxxxxxx,             xxxxxxx,          KC_DELETE,        CTL_T(KC_BSPACE),       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,          F(FDEBUG),       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */           xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                            KC_E,           xxxxxxx,           xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,         xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,            KC_Y,          A_C_T(KC_L),   OSL(BASE_RADO2_RIGHT),   C_S_T(KC_U),          _______,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */              KC_M,             ALT_T(KC_N),        RSFT_T(KC_A),      CTL_T(KC_I),           KC_O,           LT(BASE_RADO2_LEFT ,KC_ENTER),     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,             OSL(OTHERS),         KC_W,             KC_Y,         OSL(BASE_RADO2_BOTH),      _______,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                              RCTL_T(KC_DELETE),      xxxxxxx,            xxxxxxx,            xxxxxxx,         xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                RESET,            xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           KC_BSPACE,             KC_SPACE      
 //       `-------------------+------------------+-------------------'
),

#endif

