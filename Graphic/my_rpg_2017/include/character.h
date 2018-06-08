#ifndef CHARACTER_H_
#define CHARACTER_H_

#include <SFML/Graphics.h>
#include "update_info.h"
#include "defines.h"
#include "chunk_matrix.h"
#include "inventory.h"
#include "equiped_items.h"
#include "skills.h"

typedef struct
{
	sfBool is_true;
	union
	{
		void *target;
		int int_value;
	};
} s_single_command;

typedef struct
{
	s_single_command commands[CHAR_COMMANDS];
} s_commands;

s_commands commands_zero();

typedef struct
{
	sfRectangleShape *shape;
	sfVector2f pos;
	sfVector2f size;
	float movement_speed;
	s_inventory *inventory;
	s_equiped_items equiped_items;
	s_skills skills;
	struct {
		sfBool casting_spell;
		float time_left;
		int spell_id;
		sfVector2f target;
	} cast;
	struct {
		int hp;
		int hp_max;
		int stamina;
		int stamina_max;
		int magic;
		int magic_max;
		int will;
		int will_max;
	} stats;
} character;

character *character_create();

void character_update(character *ch, s_update_info update_info, s_commands commands, chunk_matrix *mat);

void player_update(character *player, s_update_info update_info, chunk_matrix *mat);

#endif