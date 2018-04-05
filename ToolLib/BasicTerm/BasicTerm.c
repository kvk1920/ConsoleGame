#include "BasicTerm.h"
#include <termios.h>

// It's var for saving current setting of terminal
static struct termios stored_settings;

inline void __terminal_set_keypress() {
	struct termios new_settings;
	tcgetattr(0, &stored_settings);
	new_settings = stored_settings;
	new_settings.c_lflag &= (~ICANON & ~ECHO);
	new_settings.c_cc[VTIME] = 0;
	new_settings.c_cc[VMIN] = 1;
	tcsetattr(0, TCSANOW, &new_settings);
}

inline void __terminal_reset_keypress() {
	tcsetattr(0, TCSANOW, &stored_settings);
}
