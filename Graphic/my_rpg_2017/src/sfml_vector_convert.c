#include "sfml_functions.h"

sfVector2f veci_to_vecf(sfVector2i a)
{
	return sfVector2f_create((float) a.x, (float) a.y);
}