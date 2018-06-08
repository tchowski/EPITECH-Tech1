#include "window.h"
#include "sfml_functions.h"
#include <stdlib.h>

void my_putstr(char *str)
{
	for (int i = 0; str[i]; i++) {
		write(1, &str[i], 1);
	}
}

int is_display_line(char *str)
{
	char *display_str = "DISPLAY=";
	for (int i = 0; i < 8; i++) {
		if (str[i] != display_str[i]) {
			return 0;
		}
	}
	return 1;
}

void env_display_handle(char **env)
{
	for (int i = 0; env[i] != NULL; i++) {
		if (is_display_line(env[i])) {
			return;
		}
	}
	exit(84);
}

int main(int argc, char **argv, char **env)
{
	env_display_handle(env);
	s_window *win = s_window_init();
	if (win == NULL) {
		return -1;
	}
	return run(win);
}