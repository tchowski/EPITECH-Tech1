#include <stdlib.h>
#include "rc_lib.h"

s_rc_lib *s_rc_lib_init()
{
	s_rc_lib *new = malloc(sizeof(s_rc_lib));
	new->tile = sfTexture_createFromFile("rc/tiles.png", NULL);
	return new;
}