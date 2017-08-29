


#ifdef RADO_KC 
  #undef _______
  #undef xxxxxxx 

  #define _______ KC_TRNS
  #define xxxxxxx KC_NO

//#define C_S_T(kc) MT((MOD_LCTL | MOD_LSFT), kc) // Control + Shift e.g. for gnome-terminal
#define S_A_T(kc) MT( ( MOD_LSFT | MOD_LALT ), kc) 
#define A_C_T(kc) MT( ( MOD_LALT | MOD_LCTL ), kc) 


[BASE_RADO2] = KEYMAP(


/* left hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
            KC_GESC,      TD(TD_ESC_CAPS),   TD(CT_SWITCH_1),          _______,             xxxxxxx,            xxxxxxx,        F(TEST2),          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         _______,           C_S_T(KC_C),   OSL(BASE_RADO2_LEFT),    A_C_T(KC_F),        _______,            KC_PGUP,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
//LT(BASE_RADO2_RIGHT ,KC_TAB),    KC_R,        CTL_T(KC_S),        LSFT_T(KC_T),       ALT_T(KC_H),          KC_D,              /* - */        
LT(BASE_RADO2_RIGHT ,KC_TAB),      KC_R,        KC_S,               LSFT_T(KC_T),       KC_H,                 KC_D,              /* - */        
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
            xxxxxxx,         TG(L_ARROWS),      OSL(OTHERS),         KC_G,              KC_P,                 KC_B,            KC_PGDOWN,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
   TO(BASE_RADO2_BOTH),      xxxxxxx,             xxxxxxx,          KC_DELETE,        CTL_T(KC_BSPACE),       
// `-------------------+-------------------+-------------------+-------------------+-------------------'


 //                                                                                                   ,------------------+-------------------.
                                                                                                             xxxxxxx,          F(FDEBUG),       
 //                                                                                                   -------------------+-------------------|
                                                                                                             /* - */           xxxxxxx,       
 //                                                                               |-------------------+------------------+-------------------|
                                                                                   LT(L_ARROWS,KC_E) ,  TD(TD_ENTER_SPACE),    xxxxxxx,       
 //                                                                               `-------------------+------------------+-------------------'



/* right hand */

// ,-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------.
           xxxxxxx,           xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,            xxxxxxx,         xxxxxxx,             
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,            KC_Y,          A_C_T(KC_L),     OSL(BASE_RADO2_RIGHT),     C_S_T(KC_U),          _______,         xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
//          /* - */            KC_M,             ALT_T(KC_N),       RSFT_T(KC_A),      CTL_T(KC_I),            KC_O,        LT(BASE_RADO2_LEFT ,KC_ENTER),     
          /* - */              KC_M,             KC_N,              RSFT_T(KC_A),          KC_I,               KC_O,        LT(BASE_RADO2_LEFT ,KC_ENTER),                
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
           _______,           _______,           KC_W,               KC_Y,             OSL(L_NUMBERS),          OSL(L_F1),      xxxxxxx,          
// |-------------------+-------------------+-------------------+-------------------+-------------------+-------------------+---------------------|
                                                   KC_RIGHT,         xxxxxxx,            xxxxxxx,            xxxxxxx,         xxxxxxx,      
//                                         `-------------------+-------------------+-------------------+-------------------+---------------------'


 //       ,------------------+-------------------.
                RESET,            xxxxxxx,        
 //       -------------------+-------------------|
                xxxxxxx,             /* - */
 //       |-------------------+------------------+-------------------|
                xxxxxxx,           KC_BSPACE,       TD(TD_ENTER_SPACE)     //<<< testing TD
 //       `-------------------+------------------+-------------------'
),

#endif

