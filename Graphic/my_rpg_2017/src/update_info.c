#include "update_info.h"

s_update_info update_info_create(sfTime deltaTime, s_keyboard *input_status)
{
	s_update_info new;
	new.deltaTime = deltaTime;
	new.input_status = input_status;
	return new;
}