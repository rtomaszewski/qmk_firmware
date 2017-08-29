


#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO
  #define LAYER_OTHER KC_TRNS

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[BASE_RADO2_LEFT] = KEYMAP(

/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),         xxxxxxx,           xxxxxxx,             xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,          KC_Q ,          TO(BASE_RADO2_BOTH),      KC_HASH ,          _______ ,        xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         KC_HOME  ,          KC_BSLASH,           KC_J ,                KC_K ,            _______ ,          /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         KC_INSERT ,         KC_AMPR,            KC_CIRC ,             KC_GRAVE  ,        _______ ,        xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,         xxxxxxx,           xxxxxxx,                _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         _______,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                            KC_LABK,        xxxxxxx,          xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           KC_TILDE ,          KC_SCOLON ,          KC_EXLM,            KC_SLASH ,        _______ ,        xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */             KC_EQUAL  ,        KC_UNDS   ,           KC_DOT   ,         KC_PLUS  ,          KC_COLN ,       KC_PERC,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           KC_6 ,              KC_1  ,              KC_2 ,              KC_0 ,               KC_3 ,         xxxxxxx,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                  _______,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'



 //       ,------------------+-------------------.
                xxxxxxx,           xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           xxxxxxx,             KC_DOLLAR      
 //       `-------------------+------------------+-------------------'
),

#endif

