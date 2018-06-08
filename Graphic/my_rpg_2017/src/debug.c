#include <stdlib.h>
#include "debug.h"

s_debug *debug_init()
{
	s_debug *new = malloc(sizeof(s_debug));
	new->loaded_chunks_status = sfFalse;
	return new;
}