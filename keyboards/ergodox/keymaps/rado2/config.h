#ifndef CONFIG_USER_RADO_H
#define CONFIG_USER_RADO_H

#include "../../config.h"

#define PREVENT_STUCK_MODIFIERS
#define IGNORE_MOD_TAP_INTERRUPT

#undef ONESHOT_TIMEOUT

#undef TAPPING_TERM
#define TAPPING_TERM 300
//#define NO_DEBUG
// #define NO_PRINT

#define DEBUG_ACTION
//#define USER_PRINT

// #define ONESHOT_TAP_TOGGLE 2
//#define ONESHOT_TIMEOUT 3000

// #undef LEADER_TIMEOUT
// #define LEADER_TIMEOUT 1000

#endif 
