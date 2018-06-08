#include "console.h"
#include "defines.h"

void c_erase(s_console *console)
{
	for (int j = 0; j < CONSOLE_INPUT_SIZE; j++) {
		if (console->input[j+1] == 0) {
			console->input[j] = 0;
			break;
		}
	}
}

void c_write(s_console *console, s_update_info update_info, int i)
{
	for (int j = 0; j < CONSOLE_INPUT_SIZE; j++) {
		if (console->input[j] == 0) {
			console->input[j] = update_info.input_status->text_input[i];
			break;
		}
	}
}

void handle_input(s_console *console, s_update_info update_info)
{
	for (int i = 0; update_info.input_status->text_input[i] != 0; i++) {
		if (update_info.input_status->text_input[i] == 8) {
			if (console->input[0] != 0)
				c_erase(console);
		}
		else if (update_info.input_status->text_input[i] == 13) {
			if (console->input[0] != 0)
				console_enter(console);
		}
		else
			c_write(console, update_info, i);
	}
}

void console_update(s_console *console, s_update_info update_info)
{
	handle_input(console, update_info);
	sfText_setUnicodeString(console->disp.current_input, console->input);
}

void console_render(sfRenderWindow *window, s_console *console)
{
	if (console->is_open) {
		sfRenderWindow_drawRectangleShape(window, console->disp.console, NULL);
		sfRenderWindow_drawText(window, console->disp.current_input, NULL);
		for (int i = 0; i < CONSOLE_OUTPUT_LINES; i++) {
			sfRenderWindow_drawText(window, console->disp.output[i].text, NULL);
		}
	}
}
