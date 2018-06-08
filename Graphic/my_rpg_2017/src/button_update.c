#include "button.h"
#include "sfml_functions.h"

void s_button_update(s_button *button, s_keyboard *input, void *struct_ptr, void *possible_value)
{
	sfVector2f m_pos = sfVector2f_create((float) input->mouse_pos.x, (float) input->mouse_pos.y);
	sfVector2f a = sfVector2f_create(button->hitbox.left, button->hitbox.top);
	sfVector2f b = a;
	b.x += button->hitbox.width;
	b.y += button->hitbox.height;
	if (m_pos.x > a.x && m_pos.x < b.x && m_pos.y > a.y && m_pos.y < b.y &&
		input->mouse_left.pressed) {
		if (button->function != NULL) {
			button->function(button, struct_ptr, possible_value);
		}
	}
}