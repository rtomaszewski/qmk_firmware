#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[L_ARROWS_DUPLICATE] = KEYMAP(

/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),          xxxxxxx,           xxxxxxx,           xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,         LCTL(KC_Y),          _______,            _______ ,           LCTL(KC_S) ,      xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            KC_TAB,           LCTL(KC_A) ,      LCTL(KC_Z) ,        LCTL(KC_C),          LCTL(KC_V) ,        LCTL(KC_X),          /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______,          _______,           _______,             _______,           _______ ,           xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,          xxxxxxx,           _______,              _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                        KC_SPACE,            KC_ENTER,         xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,          _______ ,          _______ ,         _______ ,            _______,           _______ ,         xxxxxxx,         
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */            _______ ,         _______ ,          _______,             _______ ,           _______,           _______ ,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,          _______ ,         _______ ,          _______,             TO(BASE_RADO2),      _______ ,         xxxxxxx,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                _______,           xxxxxxx,              xxxxxxx,           xxxxxxx,          xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                xxxxxxx,           xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           xxxxxxx,             _______     
 //       `-------------------+------------------+-------------------'
),

#endif
