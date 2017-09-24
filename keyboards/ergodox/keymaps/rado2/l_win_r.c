#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

[L_WIN_R] = KEYMAP(

/* left hand 

*/
// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),           KC_2 ,              xxxxxxx,          xxxxxxx,           xxxxxxx,             xxxxxxx,           xxxxxxx,         
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          xxxxxxx,            LGUI(KC_Q),          LGUI(KC_B),       xxxxxxx ,          LGUI(KC_F),          LGUI(KC_K),        xxxxxxx,            
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
        LGUI(KC_TAB),         LGUI(KC_R),          LGUI(KC_S),       LGUI(KC_T),        LGUI(KC_H),          LGUI(KC_D),              /* - */        
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          xxxxxxx,            xxxxxxx,             LGUI(KC_X),        LGUI(KC_G),       LGUI(KC_C),          LGUI(KC_P),        xxxxxxx,            
// |-------------------+-------------------+- ------------------+-------------------+-------------------+-------------------+---------------------|
          xxxxxxx,            xxxxxxx,             xxxxxxx,           xxxxxxx,          xxxxxxx,      
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,          F(FDEBUG),       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */           xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                      LGUI(KC_SPACE) ,      xxxxxxx,      xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'

/* right hand */
/*
  OSL( OTHERS L_NUMBERS)
 OSL(BASE_RADO2_RIGHT)      
 TT(L_ARROWS),
 */
// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,          xxxxxxx,               xxxxxxx,           xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,        LGUI(KC_TILD),     LGUI(KC_SCOLON),        xxxxxxx,        LGUI(KC_SLASH),      LGUI(KC_PIPE),        xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */          LGUI(KC_EQUAL),    LGUI(KC_UNDS),       LGUI(KC_DOT),      LGUI(KC_PLUS),       LGUI(KC_COLN),    LGUI ( KC_PERC), 
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           xxxxxxx,              xxxxxxx,         xxxxxxx,             xxxxxxx,            xxxxxxx,           xxxxxxx,    
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                            LGUI(KC_PSCREEN),       LGUI(KC_RPRN),      LGUI(KC_RCBR),       xxxxxxx,            xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'

 //       ,------------------+-------------------.
                xxxxxxx,           xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           xxxxxxx,        LGUI(KC_COMMA)
 //       `-------------------+------------------+-------------------'
),

#endif

