#include <stdlib.h>
#include "character.h"
#include "sfml_functions.h"
#include "condition_struct.h"
#include "my_maths.h"
#include "collisions.h"
#include "change.h"
#include "defines.h"

static void character_stat_init(character *new)
{
	new->stats.hp_max = CHARACTER_BASE_HEALTH;
	new->stats.hp = new->stats.hp_max;
	new->stats.stamina_max = CHARACTER_BASE_STAMINA;
	new->stats.stamina = new->stats.stamina_max;
	new->stats.magic_max = CHARACTER_BASE_MAGIC;
	new->stats.magic = new->stats.magic_max;
	new->stats.will_max = CHARACTER_BASE_WILL;
	new->stats.will = new->stats.will_max;
}

character *character_create()
{
	character *new = malloc(sizeof(character));
	
	if (new == NULL) {
		return NULL;
	}
	new->pos = sfVector2f_create(200.f, 200.f);
	new->size = sfVector2f_create(100.f, 150.f);
	new->movement_speed = SPEED;
	new->shape = sfRectangleShape_create();
	new->inventory = inventory_init(30);
	new->equiped_items = equiped_init();
	new->skills = s_skill_empty();
	sfRectangleShape_setFillColor(new->shape, sfWhite);
	sfRectangleShape_setPosition(new->shape, new->pos);
	sfRectangleShape_setSize(new->shape, new->size);
	character_stat_init(new);
	return new;
}

int check_new_pos(sfFloatRect npos, chunk_matrix *mat, float *ncoord, float old_value)
{
	for (int i = (npos.left/TILE_SIZE) - 10; i < (npos.left/TILE_SIZE) + 10; i++) {
		for (int j = npos.top/TILE_SIZE - 10; j < npos.top/TILE_SIZE + 10; j++) {
			if (collision_by_tile_id(get_case_value(mat, i, j))) {
				sfFloatRect s_tile;
				s_tile.left = i * TILE_SIZE;
				s_tile.top = j * TILE_SIZE;
				s_tile.width = TILE_SIZE;
				s_tile.height = TILE_SIZE;
				if (collision(npos, s_tile, get_case_value(mat, i, j))) {
					*ncoord = old_value;
					return 1;
				}
				
			}
		}
	}
	return 0;
}

void move(character *ch, s_update_info update_info, sfVector2f direction, chunk_matrix *mat)
{
	sfVector2f movement = vec_norm(direction);
	sfVector2f npos = ch->pos;
	movement.x = movement.x * ch->movement_speed * sfTime_asSeconds(update_info.deltaTime);
	movement.y = movement.y * ch->movement_speed * sfTime_asSeconds(update_info.deltaTime);
	sfFloatRect hitbox;
	
	npos.x += movement.x;
	hitbox = sfFloatRect_create(npos.x, npos.y + ch->size.y - ch->size.x, ch->size.x, ch->size.x);
	check_new_pos(hitbox, mat, &npos.x, ch->pos.x);
	npos.y += movement.y;
	hitbox = sfFloatRect_create(npos.x, npos.y + ch->size.y - ch->size.x, ch->size.x, ch->size.x);
	check_new_pos(hitbox, mat, &npos.y, ch->pos.y);
	ch->pos.x = npos.x;
	ch->pos.y = npos.y;
}

void character_update(character *ch, s_update_info update_info, s_commands commands, chunk_matrix *mat)
{
	if (ch->cast.casting_spell == sfTrue) {
		ch->cast.time_left -= sfTime_asSeconds(update_info.deltaTime);
		if (ch->cast.time_left <= 0) {
			ch->cast.time_left = 0;
			ch->cast.casting_spell = sfFalse;
			ch->cast.spell_id = -1;
		}
	}
	if (commands.commands[CMD_MOVE].is_true) {
		x_y_direction* directions = x_y_direction_list();
		sfVector2f direction;
		direction.x = directions[commands.commands[CMD_MOVE].int_value].x;
		direction.y = directions[commands.commands[CMD_MOVE].int_value].y;
		move(ch, update_info, direction, mat);
	}
	if (commands.commands[CMD_CAST].is_true) {
		ch->cast.casting_spell = sfTrue;
		ch->cast.spell_id = 0;
		ch->cast.time_left = 2.f;
	}
	sfRectangleShape_setPosition(ch->shape, ch->pos);
}
