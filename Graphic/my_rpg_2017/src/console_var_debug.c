#include <stdlib.h>
#include "console_vars.h"
#include "sfml_functions.h"

console_struct *init_debug_struct(s_debug *debug)
{
	console_struct *new = console_struct_create();
	new->name = str_to_unicode("debug");
	new->n_of_vars = 1;
	new->vars = malloc(sizeof(console_var) * 1);
	new->vars[0].name = str_to_unicode("loaded_chunks");
	new->vars[0].type = TYPE_BOOL;
	new->vars[0].bool_value = &debug->loaded_chunks_status;
	return new;
}