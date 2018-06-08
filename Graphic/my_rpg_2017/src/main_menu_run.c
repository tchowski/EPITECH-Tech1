#include "main_menu.h"
#include "sfml_functions.h"

static void process_event(s_main_menu *m_menu)
{
	sfEvent event;
	while (sfRenderWindow_pollEvent(m_menu->window, &event)) {
		if (event.type == sfEvtClosed) {
			sfRenderWindow_close(m_menu->window);
		}
	}
	keyboard_update(m_menu->input);
	mouse_update(m_menu->input);
	m_menu->input->mouse_pos = veci_to_vecf(sfMouse_getPositionRenderWindow(m_menu->window));
}

static void update(s_main_menu *m_menu, sfTime deltaTime)
{
	s_button_update(m_menu->play_button, m_menu->input, (void*) m_menu, NULL);
	s_button_update(m_menu->exit_button, m_menu->input, (void*) m_menu, NULL);
}

static void render(s_main_menu *m_menu)
{
	sfRenderWindow_clear(m_menu->window, sfBlack);
	sfRenderWindow_drawRectangleShape(m_menu->window, m_menu->play_button->shape, NULL);
	sfRenderWindow_drawRectangleShape(m_menu->window, m_menu->exit_button->shape, NULL);
	sfRenderWindow_display(m_menu->window);
}

int main_menu_run(s_main_menu *m_menu)
{
	sfClock *clock = sfClock_create();
	sfTime deltaTime = sfTime_Zero;
	while (sfRenderWindow_isOpen(m_menu->window) && m_menu->exit_with_status == -1) {
		deltaTime = sfClock_restart(clock);
		process_event(m_menu);
		update(m_menu, deltaTime);
		render(m_menu);
		sfSleep(sfSeconds(1.f/40.f));
	}
	if (m_menu->exit_with_status == -1) {
		return 0;
	}
	return m_menu->exit_with_status;
}
