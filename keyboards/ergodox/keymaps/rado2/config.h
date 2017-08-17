#ifndef CONFIG_USER_RADO_H
#define CONFIG_USER_RADO_H

#include "../../config.h"

#define PREVENT_STUCK_MODIFIERS

// this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold 
//(z becomes ctrl when you hold it, 
//and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

// if you undefine the variable then you are gong to see this erronous behaviour
// - 
// -  CTL_T(KC_S),  LSFT_T(KC_T), ALT_T(KC_H), are going to be trigered accidentaly
//		- rado i didnt know that im preasing 2 keys at the same time
//		- because how phisical fingers are connected in your hand it is imposible to avoid this
//#undef IGNORE_MOD_TAP_INTERRUPT
#define IGNORE_MOD_TAP_INTERRUPT

// rado ive tested this and it doesn't seem to make any diff for me. 
// - it looks like be some additonal twick for the IGNORE_MOD_TAP_INTERRUPT
// - this may be relevant to other then the ALT_T funcitons i primary use 
//	https://github.com/qmk/qmk_firmware/issues/1521
//	Make LT send the keycode if no other key was tapped #1521
//#undef PERMISSIVE_HOLD
//#define PERMISSIVE_HOLD

// what does it do? 
//  - how long the double tab can take / in what time the tap dance sequence has to happen
//  - how long before a tap becomes a hold
#undef TAPPING_TERM
#define TAPPING_TERM 250

// it allows the OSL to not be enabled forever. You always want your keyboard to return to the base layout. 
// thinking and trying to remember  on what layear you are currently on is impossible.
// example: type text in editor, then switch windows to browser and read for some time and repeat
// - this is not combined time for 2 OSLs
// - i.e you press OSL 1st time and it takes you to new layer L1. On L1 there is another OSL
//   and you press it. The timer is reset to 0.
//#undef ONESHOT_TIMEOUT
#define ONESHOT_TIMEOUT 500
// how many taps before oneshot toggle is triggered
#define ONESHOT_TAP_TOGGLE 5



//#define NO_DEBUG
// #define NO_PRINT

#define DEBUG_ACTION
//#define USER_PRINT

// #undef LEADER_TIMEOUT
// #define LEADER_TIMEOUT 1000

#endif 
