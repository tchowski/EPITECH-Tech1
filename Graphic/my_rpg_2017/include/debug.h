#ifndef DEBUG_H_
#define DEBUG_H_

#include <SFML/Graphics.h>

typedef struct
{
	sfBool loaded_chunks_status;
} s_debug;

s_debug *debug_init();

#endif