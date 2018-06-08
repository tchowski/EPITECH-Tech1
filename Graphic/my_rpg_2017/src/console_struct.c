#include <stdlib.h>
#include "console_vars.h"

console_struct *console_struct_create()
{
	console_struct *new = malloc(sizeof(console_struct));
	new->n_of_vars = 0;
	new->name = NULL;
	return new;
}