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
     TO(BASE_RADO2),          KC_7,           xxxxxxx,           xxxxxxx,              xxxxxxx,             xxxxxxx,          TD(TD_ESC_CAPS),          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          KC_HASH ,          KC_LCBR,    OSL(BASE_RADO2_DUPLICATE_L), KC_QUOTE ,        KC_BSLASH ,       TD(TD_ESC_CAPS),     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
LT(BASE_RADO2_DUPLICATE_R,KC_AT), KC_LBRACKET,   KC_MINUS ,         KC_LPRN,              KC_DQUO  ,        KC_ASTR ,          /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,           KC_9 ,             KC_8 ,             KC_5 ,                KC_4,             KC_7 ,            xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,           xxxxxxx,           xxxxxxx,              _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'
 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,         xxxxxxx,       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */          xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                    LT(L_ARROWS2, KC_SPACE ),         xxxxxxx,         xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */


// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,          xxxxxxx,               xxxxxxx,           xxxxxxx,            xxxxxxx,        xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           KC_TILD ,         KC_SCOLON ,  OSL(BASE_RADO2_DUPLICATE_R), KC_SLASH ,          KC_PIPE,        xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */             KC_EQUAL  ,        KC_UNDS   ,           KC_DOT   ,         KC_PLUS  ,          KC_COLN ,      LT(BASE_RADO2_DUPLICATE_L , KC_PERC), 
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           xxxxxxx,           KC_6 ,              KC_1  ,              KC_2 ,              KC_0 ,               KC_3 ,        _______,
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                  TO(BASE_RADO2) ,    xxxxxxx,            xxxxxxx,            xxxxxxx,        xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'

 //       ,------------------+-------------------.
                xxxxxxx,           xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           xxxxxxx,         LT(L_ARROWS, KC_COMMA)     
 //       `-------------------+------------------+-------------------'
),

#endif

