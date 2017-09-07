#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[L_ARROWS_BASH] = KEYMAP(

/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),          xxxxxxx,           xxxxxxx,           xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,          LCTL(KC_W) ,      LALT(KC_D),          LCTL(KC_Z),         _______ ,         xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            _______,       LCTL(KC_R),     LCTL(LSFT(KC_MINUS)),   LCTL(KC_C),        LSFT(KC_INSERT),      LCTL(KC_Y),       /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,        _______ ,         TO(BASE_RADO2) ,     _______ ,             _______ ,           _______ ,           xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,          xxxxxxx,           xxxxxxx,              _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                               // LT(L_ARROWS_BASH2,KC_SPACE),  xxxxxxx,         xxxxxxx,       
                                                                                          KC_SPACE,           xxxxxxx,         xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           _______ ,         KC_LEFT ,              KC_UP ,           KC_RIGHT ,          _______ ,        xxxxxxx,         
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */              LCTL(KC_A) ,    LALT(KC_B),           KC_DOWN  ,        LALT(KC_F) ,         LCTL(KC_E) ,      xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,            LCTL(KC_U) ,    LCTL(KC_PGUP),       LCTL(KC_PGDN) ,       _______ ,          LCTL(KC_K)  ,      xxxxxxx,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                KC_BSPACE,           xxxxxxx,           xxxxxxx,            xxxxxxx,          xxxxxxx,      
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

