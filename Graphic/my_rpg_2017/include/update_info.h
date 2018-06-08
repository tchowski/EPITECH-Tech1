#ifndef UPDATE_INFO_H_
#define UPDATE_INFO_H_

#include "keyboard.h"

typedef struct
{
	s_keyboard *input_status;
	sfTime deltaTime;
} s_update_info;

s_update_info update_info_create(sfTime deltaTime, s_keyboard *input_status);

#endif