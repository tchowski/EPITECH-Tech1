#include "console.h"
#include "defines.h"

void write_line(s_console *console, sfUint32 *output, int line)
{
	for (int i = 0; i < CONSOLE_OUTPUT_SIZE; i++) {
		console->disp.output[line].content[i] = 0;
	}
	for (int i = 0; i < CONSOLE_OUTPUT_SIZE && output[i]; i++) {
		console->disp.output[line].content[i] = output[i];
	}
	console->disp.output[line].empty = sfFalse;
	sfText_setUnicodeString(console->disp.output[line].text,
	console->disp.output[line].content);
}

void shift_outputs(s_console *console)
{
	for (int i = 0; i < CONSOLE_OUTPUT_LINES - 1; i++) {
		for (int j = 0; j < CONSOLE_OUTPUT_SIZE; j++) {
			console->disp.output[i].content[j] =
			console->disp.output[i+1].content[j];
		}
	}
	console->disp.output[CONSOLE_OUTPUT_LINES-1].empty = sfTrue;
	for (int i = 0; i < CONSOLE_OUTPUT_SIZE; i++)
		console->disp.output[CONSOLE_OUTPUT_LINES-1].content[i] = 0;
	
	for (int i = 0; i < CONSOLE_OUTPUT_LINES; i++) {
		sfText_setUnicodeString(console->disp.output[i].text,
			console->disp.output[i].content);
	}
}

void write_output(s_console *console, sfUint32 *output)
{
	sfBool valid_line = sfFalse;
	for (int i = 0; i < CONSOLE_OUTPUT_LINES; i++) {
		if (console->disp.output[i].empty == sfTrue) {
			write_line(console, output, i);
			valid_line = sfTrue;
			break;
		}
	}
	if (valid_line == sfFalse)
	{
		shift_outputs(console);
		for (int i = 0; i < CONSOLE_OUTPUT_LINES; i++) {
			if (console->disp.output[i].empty == sfTrue) {
				write_line(console, output, i);
				break;
			}
		}
	}
}