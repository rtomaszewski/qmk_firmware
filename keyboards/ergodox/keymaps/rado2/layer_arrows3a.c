#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[L_ARROWS3_A] = KEYMAP(

/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),          xxxxxxx,           xxxxxxx,           xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,          KC_LEFT ,          LCTL(KC_V) ,          KC_RIGHT,          _______ ,        xxxxxxx,      
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            KC_TAB,          KC_HOME ,        LCTL(KC_LEFT),         KC_UP  ,           LCTL(KC_RIGHT),        KC_END,         /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         LCTL(KC_HOME) ,       KC_PGUP,          KC_DOWN ,            KC_PGDN ,         LCTL(KC_END) ,    xxxxxxx,    
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,          xxxxxxx,           xxxxxxx,              _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                        _______,         xxxxxxx,         xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */ 

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,          _______ ,        LSFT(KC_LEFT) ,          LCTL(KC_C)  ,          LSFT(KC_RIGHT)  ,   _______ ,   xxxxxxx,         
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */           LSFT(KC_HOME) ,   LSFT(LCTL(KC_LEFT)),  LSFT(KC_UP),     LSFT(LCTL(KC_RIGHT)),   LSFT(KC_END) ,     KC_ENTER,    
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,     LSFT(LCTL(KC_HOME)),     LSFT(KC_PGUP),      LSFT(KC_DOWN),    LSFT(KC_PGDN),    LSFT(LCTL(KC_END)),    xxxxxxx,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                _______,           xxxxxxx,              xxxxxxx,           xxxxxxx,          xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                xxxxxxx,           xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           xxxxxxx,             KC_SPACE      
 //       `-------------------+------------------+-------------------'
),

#endif
