#include <stdlib.h>
#include "console.h"
#include "sfml_functions.h"
#include "defines.h"

static void create_background(s_console *new)
{
	new->disp.console = sfRectangleShape_create();
	sfRectangleShape_setPosition(new->disp.console, sfVector2f_create(0, 0));
	sfRectangleShape_setSize(new->disp.console, sfVector2f_create(1920, GUI_CONSOLE_HEIGHT));
	sfRectangleShape_setFillColor(new->disp.console, sfColor_fromRGBA(140, 140, 140, 170));
	sfRectangleShape_setOutlineColor(new->disp.console, sfColor_fromRGBA(30, 30, 30, 170));
	sfRectangleShape_setOutlineThickness(new->disp.console, 40);
}

static void init_input(s_console *new)
{
	new->input = malloc(sizeof(sfUint32) * CONSOLE_INPUT_SIZE);
	for (int i = 0; i < CONSOLE_INPUT_SIZE; i++) {
		new->input[i] = 0;
	}
	new->disp.font = sfFont_createFromFile("rc/arial.ttf");
	new->disp.current_input = sfText_create();
	sfText_setCharacterSize(new->disp.current_input, 32);
	sfText_setPosition(new->disp.current_input, sfVector2f_create(10, GUI_CONSOLE_HEIGHT));
	sfText_setColor(new->disp.current_input, sfWhite);
	sfText_setUnicodeString(new->disp.current_input, new->input);
	sfText_setFont(new->disp.current_input, new->disp.font);

}

static void init_output(s_console *new)
{
	new->disp.output = malloc(sizeof(line) * CONSOLE_OUTPUT_LINES);
	for (int i = 0; i < CONSOLE_OUTPUT_LINES; i++) {
		new->disp.output[i].text = sfText_create();
		sfText_setCharacterSize(new->disp.output[i].text, 20);
		sfText_setPosition(new->disp.output[i].text, sfVector2f_create(10, 10 + 25 * i));
		sfText_setColor(new->disp.output[i].text, sfWhite);
		sfText_setFont(new->disp.output[i].text, new->disp.font);
		new->disp.output[i].empty = sfTrue;
		new->disp.output[i].content = malloc(sizeof(sfUint32) * CONSOLE_OUTPUT_SIZE);
	}
}

s_console *console_init()
{
	s_console *new = malloc(sizeof(s_console));
	new->is_open = sfFalse;
	create_background(new);
	init_input(new);
	init_output(new);
	return new;
}

void console_destroy(s_console *console)
{

}