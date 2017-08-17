


#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO
  #define TOGLE KC_TRNS

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[BASE_RADO2_BOTH] = KEYMAP(

/* left hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),          xxxxxxx,           xxxxxxx,           xxxxxxx,              xxxxxxx,           xxxxxxx,         TD(TD_ESC_CAPS),          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,           KC_DOLLAR,    OSL(BASE_RADO2_DUPLICATE_L),  KC_QUOTE ,        _______ ,         TD(TD_ESC_CAPS),     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            KC_TAB ,          KC_COLN ,         KC_MINUS ,          KC_LPRN,             KC_DQUO  ,        KC_EQUAL ,          /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          KC_9 ,             KC_8 ,             KC_5 ,                 KC_4,           KC_7 ,         xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,           xxxxxxx,           xxxxxxx,              _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                      LT(BASE_RADO2, KC_COMMA),        xxxxxxx,          xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           _______ ,           KC_HASH ,  OSL(BASE_RADO2_DUPLICATE_R) ,   KC_SLASH ,        _______ ,       xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */             KC_ASTR  ,        KC_UNDS   ,           KC_DOT   ,         KC_PLUS  ,            KC_PIPE ,       KC_ENTER,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           KC_6 ,              KC_1  ,             KC_2 ,              KC_0 ,               KC_3 ,         xxxxxxx,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                  _______,            xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,      
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

