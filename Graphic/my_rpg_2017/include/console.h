#ifndef CONSOLE_H_
#define CONSOLE_H_

#include <SFML/Graphics.h>
#include "update_info.h"
#include "debug.h"
#include "console_vars.h"
#include "level.h"

typedef struct
{
	sfText *text;
	sfBool empty;
	sfUint32 *content;
} line;

typedef struct
{
	sfBool is_open;
	sfUint32 *input;
	struct {
		sfText *current_input;
		line *output;
		sfRectangleShape *console;
		sfFont *font;
	} disp;

	s_debug *debug;
	s_level *level;
	console_struct *var_debug_struct;
} s_console;

s_console *console_init();

void console_destroy(s_console *console);

void console_update(s_console *console, s_update_info update_info);

void console_enter(s_console *console);

void write_output(s_console *console, sfUint32 *output);

void console_render(sfRenderWindow *window, s_console *console);

sfBool console_strcmp(sfUint32 *a, sfUint32 *b);

sfBool console_strcmp_cmd(sfUint32 *a, sfUint32 *b, int place);

int console_get_input_value(sfUint32 *input, int place);

sfBool console_strcmp_char(sfUint32 *a, char *b);

#endif