


#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[BASE_RADO2_DUPLICATE_L] = KEYMAP(

/* left hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
     TO(BASE_RADO2),         xxxxxxx,           xxxxxxx,             xxxxxxx,              xxxxxxx,           xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          _______ ,          KC_Q ,              xxxxxxx,              KC_HASH ,          _______ ,        xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            KC_TAB,          KC_HOME  ,          KC_BSLASH,           KC_J ,                KC_K ,            _______ ,          /* - */     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         KC_INSERT ,         KC_AMPR,            KC_CIRC ,             KC_GRAVE  ,        _______ ,        xxxxxxx,     
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,          xxxxxxx,         xxxxxxx,           xxxxxxx,                _______,       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,          F(FDEBUG),       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */           xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                         KC_LABK,           KC_ENTER,          xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,         xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,            KC_Y,              KC_L,               KC_EXLM,            KC_U,             _______,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
          /* - */              KC_M,             KC_N,                KC_A,               KC_I,               KC_O,           KC_ENTER ,              
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,          _______,            KC_W,                KC_Y,             xxxxxxx,              xxxxxxx,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                 _______,           xxxxxxx,            xxxxxxx,              xxxxxxx,         xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                RESET,            xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           KC_BSPACE,          KC_E       
 //       `-------------------+------------------+-------------------'
),

#endif

