#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[L_ARROWS] = KEYMAP(

/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),          xxxxxxx,           xxxxxxx,           xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,         _______ ,          _______,           _______ ,           LCTL(KC_S) ,      xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            KC_TAB,           LCTL(KC_A) ,      LCTL(KC_Y),        TG(L_ARROWS2),       _______ ,           _______ ,           /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______,          LCTL(KC_Z) ,        LCTL(KC_C),          LCTL(KC_V) ,        LCTL(KC_X),         xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,          xxxxxxx,           xxxxxxx,              _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                   LT(L_ARROWS2,KC_SPACE),   KC_ENTER,         xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,          _______ ,          KC_LEFT ,           KC_UP  ,            KC_RIGHT,          _______ ,        xxxxxxx,         
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */           KC_HOME ,        LCTL(KC_LEFT),         KC_DOWN  ,        LCTL(KC_RIGHT),        KC_END,         KC_ENTER,    
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,       LCTL(KC_HOME) ,       KC_PGUP,           KC_PGDN ,          TO(BASE_RADO2) ,       LCTL(KC_END) ,    xxxxxxx,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                KC_BSPACE,           xxxxxxx,              xxxxxxx,           xxxxxxx,          xxxxxxx,      
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

