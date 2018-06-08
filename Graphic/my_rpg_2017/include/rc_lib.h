#ifndef RC_LIB_H_
#define RC_LIB_H_

#include <SFML/Graphics.h>

typedef struct
{
	sfTexture *tile;
} s_rc_lib;

s_rc_lib *s_rc_lib_init();

#endif