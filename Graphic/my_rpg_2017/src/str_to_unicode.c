#include <stdlib.h>
#include "sfml_functions.h"
#include "my.h"

sfUint32 *str_to_unicode(char *str)
{
	sfUint32 *new = malloc(sizeof(sfUint32) * (my_strlen(str) + 1));
	for (int i = 0; str[i]; i++) {
		new[i] = (sfUint32) str[i];
	}
	new[my_strlen(str)] = 0;
	return new;
}