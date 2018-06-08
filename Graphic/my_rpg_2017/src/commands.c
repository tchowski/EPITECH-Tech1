#include "character.h"
#include "defines.h"

s_commands commands_zero()
{
	s_commands new;
	for (int i = 0; i < CHAR_COMMANDS; i++) {
		new.commands[i].is_true = sfFalse;
		new.commands[i].target = NULL;
	}
	return new;
}