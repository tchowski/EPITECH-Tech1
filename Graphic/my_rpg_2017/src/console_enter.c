#include <stdlib.h>
#include "console.h"
#include "defines.h"
#include "sfml_functions.h"

void input_clear(s_console *console)
{
	for (int i = 0; i < CONSOLE_INPUT_SIZE; i++) {
		console->input[i] = 0;
	}
}

int vars(s_console *console)
{
	if (console_strcmp_cmd(console->input, console->var_debug_struct->name, 0)) {
		if (console_strcmp_cmd(console->input, console->var_debug_struct->vars[0].name, 1)) {
			write_output(console, console->input);
			*console->var_debug_struct->vars[0].bool_value = (console_get_input_value(console->input, 2));
			return 1;
		}
	}
	return 0;
}

void console_enter(s_console *console)
{
	if (console_strcmp_char(console->input, "exit")) {
		console->is_open = sfFalse;
	}
	else {
		if (!vars(console)) {
			sfUint32 *output = str_to_unicode("command not found.");;
			write_output(console, output);
			free(output);
		}
	}
	input_clear(console);	
}