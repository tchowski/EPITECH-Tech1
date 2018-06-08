#include <stdlib.h>
#include "character.h"
#include "condition_struct.h"

static sfBool wants_to_move(s_update_info update_info)
{
	if (update_info.input_status->keys[sfKeyQ].status || update_info.input_status->keys[sfKeyZ].status ||
		update_info.input_status->keys[sfKeyD].status || update_info.input_status->keys[sfKeyS].status) {
		return sfTrue;
	}
	return sfFalse;
}

static int x_y_to_direction(int x, int y)
{
	x_y_direction* directions = x_y_direction_list();
	if (directions == NULL) {
		return -1;
	}
	for (int i = 0; i < CMD_MOVE_ARGS_NB; i++) {
		if (x == directions[i].x && y == directions[i].y) {
			free(directions);		
			return i;
		}
	}
	free(directions);
	return -1;
}

static int in_which_direction(s_update_info update_info)
{
	int x = 0;
	int y = 0;
	if (update_info.input_status->keys[sfKeyQ].status) {
		x -= 1;
	}
	if (update_info.input_status->keys[sfKeyD].status) {
		x += 1;
	}
	if (update_info.input_status->keys[sfKeyZ].status) {
		y -= 1;
	}
	if (update_info.input_status->keys[sfKeyS].status) {
		y += 1;
	}
	if (x == 0 && y == 0) {
		return -1;
	}

	return x_y_to_direction(x, y);
}

void casting_spell(character *player, s_update_info *update_info, s_commands *commands)
{
	if (update_info->input_status->keys[sfKeyNum1].pressed == sfTrue) {
		commands->commands[CMD_CAST].is_true = sfTrue;
		commands->commands[CMD_CAST].int_value = 0;
	}
}

void player_update(character *player, s_update_info update_info, chunk_matrix *mat)
{
	s_commands commands = commands_zero();
	if (wants_to_move(update_info)) {
		commands.commands[CMD_MOVE].is_true = sfTrue;
		commands.commands[CMD_MOVE].int_value = in_which_direction(update_info);
		if (commands.commands[CMD_MOVE].int_value == -1) {
			commands.commands[CMD_MOVE].is_true = sfFalse;
		}
	}
	casting_spell(player, &update_info, &commands);
	character_update(player, update_info, commands, mat);
}