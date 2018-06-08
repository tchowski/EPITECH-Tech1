#ifndef CONSOLE_VARS_H_
#define CONSOLE_VARS_H_

#include <SFML/Graphics.h>
#include "debug.h"

#define TYPE_BOOL	0
#define TYPE_FLOAT	1
#define TYPE_INT	2

typedef struct
{
	sfUint32 *name;
	int type;
	union {
		sfBool *bool_value;
		float *float_value;
		int *int_value;
	};
} console_var;

typedef struct
{
	sfUint32 *name;
	int n_of_vars;
	console_var *vars;
} console_struct;

console_struct *console_struct_create();

console_struct *init_debug_struct(s_debug *debug);

#endif