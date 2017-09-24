#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

[L_SFT_L] = KEYMAP(

/* left hand 

*/
// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),          KC_1,               xxxxxxx,           xxxxxxx,           xxxxxxx,             xxxxxxx,            xxxxxxx,         
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,        LSFT(KC_HASH) ,     LSFT(KC_LCBR),       xxxxxxx,            LSFT(KC_QUOTE) ,     LSFT(KC_BSLASH) ,     xxxxxxx, 
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            KC_AT,          LSFT(KC_LBRACKET),  LSFT(KC_MINUS) ,     LSFT(KC_LPRN),      LSFT(KC_DQUO) ,      LSFT(KC_ASTR) ,          /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,           xxxxxxx,              xxxxxxx,         xxxxxxx,             xxxxxxx,            xxxxxxx,           xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,          LSFT(KC_AMPR),     LSFT(KC_CIRC) ,   LSFT(KC_GRAVE)  ,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'
 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                          xxxxxxx,           xxxxxxx,         xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */
/*     
  OSL( OTHERS L_NUMBERS)
 OSL(BASE_RADO2_RIGHT)      
 TT(L_ARROWS),
 */
// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,          xxxxxxx,            xxxxxxx,             xxxxxxx,           xxxxxxx,           xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,         LSFT(KC_V),        LSFT(KC_L),          xxxxxxx,            LSFT(KC_U),        LSFT(KC_Z),         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */           LSFT(KC_M),        LSFT(KC_N),          LSFT(KC_A),         LSFT(KC_I),        LSFT(KC_O),        LSFT(KC_ENTER),     
// |-------------------+-------------------+-------------------+-------------------+------------------+-------------------+---------------------|
          xxxxxxx,           _______,          LSFT(KC_W),          LSFT(KC_Y),         LSFT(KC_J),        xxxxxxx,           xxxxxxx, 
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                               xxxxxxx,          xxxxxxx,               xxxxxxx,             xxxxxxx,         xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                xxxxxxx,            xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
               xxxxxxx,            xxxxxxx,          LSFT(KC_E)
 //       `-------------------+------------------+-------------------'
),

#endif

