#include "game.h"
#include "sfml_functions.h"
#include "my_maths.h"
#include "character.h"
#include <math.h>

static void get_entered_text(game *gm, sfEvent *event)
{
	for (int i = 0; i < 40; i++) {
		if (gm->input->text_input[i] == 0) {
			gm->input->text_input[i] = event->text.unicode;
			break;
		}
	}

}

static void process_event(game *gm)
{
	sfEvent event;

	keyboard_update(gm->input);
	mouse_update(gm->input);
	while (sfRenderWindow_pollEvent(gm->window, &event)) {
		switch (event.type) {
			case sfEvtClosed:
			sfRenderWindow_close(gm->window);
			break;
			case sfEvtTextEntered:
			get_entered_text(gm, &event);
			break;
			case sfEvtKeyPressed:
			keyboard_pressed(gm->input, event.key.code);
			break;
			case sfEvtKeyReleased:
			keyboard_released(gm->input, event.key.code);
			break;
		}
	}
	gm->input->mouse_pos = veci_to_vecf(sfMouse_getPositionRenderWindow(gm->window));
}

static void update(game *gm, sfTime deltaTime)
{
	if (gm->input->keys[sfKeyF1].pressed) {
		if (gm->console->is_open) {
			gm->console->is_open = sfFalse;
		}
		else {
			gm->console->is_open = sfTrue;
		}
	}
	if (!gm->console->is_open) {
		level_update(gm->level, update_info_create(deltaTime, gm->input));
		if (gm->debug->loaded_chunks_status == sfTrue) {
			level_update_loaded_chunk_map(gm->level);
		}
	}
	else {
		console_update(gm->console, update_info_create(deltaTime, gm->input));
	}
}

int game_run(game *gm)
{
	sfClock *clock = sfClock_create();
	sfTime deltaTime = sfTime_Zero;
	while (sfRenderWindow_isOpen(gm->window)) {
		deltaTime = sfClock_restart(clock);
		process_event(gm);
		update(gm, deltaTime);
		game_render(gm);
	}

	return 0;
}