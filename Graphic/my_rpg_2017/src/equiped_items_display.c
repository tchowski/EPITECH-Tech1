#include <stdlib.h>
#include "equiped_items_display.h"
#include "sfml_functions.h"

static const char *parts_names[6] = {
	"weapon :",
	"helmet :",
	"chest :",
	"legs :",
	"ring 1 :",
	"ring 2 :"
};

void init_texts(equiped_items_display *new, sfFloatRect pos)
{
	new->font = sfFont_createFromFile("./rc/arial.ttf");
	new->titles = malloc(sizeof(sfText*) * 6);
	for (int i = 0; i < 6; i++) {
		new->titles[i] = sfText_create();
		sfText_setCharacterSize(new->titles[i], 30);
		sfText_setPosition(new->titles[i], sfVector2f_create(
			pos.left + 5, pos.top + 5 + (50 * i)));
		sfText_setFont(new->titles[i], new->font);
		sfText_setString(new->titles[i], parts_names[i]);
	}
	new->items = malloc(sizeof(sfText*) * 6);
	for (int i = 0; i < 6; i++) {
		new->items[i] = sfText_create();
		sfText_setCharacterSize(new->items[i], 30);
		sfText_setPosition(new->items[i], sfVector2f_create(
			pos.left + 150, pos.top + 5 + (50 * i)));
		sfText_setFont(new->items[i], new->font);
	}
}

equiped_items_display *equiped_items_display_create(s_equiped_items *equiped_items, sfFloatRect pos)
{
	equiped_items_display *new = malloc(sizeof(equiped_items_display));

	if (new == NULL) {
		return NULL;
	}
	new->pos = pos;
	new->equiped_items = equiped_items;
	new->background = sfRectangleShape_create();
	sfRectangleShape_setSize(new->background,
		sfVector2f_create(pos.width, pos.height));
	sfRectangleShape_setPosition(new->background,
		sfVector2f_create(pos.left, pos.top));
	sfRectangleShape_setFillColor(new->background,
		sfColor_fromRGBA(120, 120, 120, 100));
	init_texts(new, pos);
	return new;
}

void equiped_items_str_update(equiped_items_display *equiped_items)
{
	for (int i = 0; i < 6; i++) {
		sfText_setString(equiped_items->items[i], "- empty -");
	}
	if (equiped_items->equiped_items->weapon != NULL) {
		sfText_setUnicodeString(equiped_items->items[0], equiped_items->equiped_items->weapon->name);
	}
	if (equiped_items->equiped_items->helmet != NULL) {
		sfText_setUnicodeString(equiped_items->items[1], equiped_items->equiped_items->helmet->name);
	}
	if (equiped_items->equiped_items->chest != NULL) {
		sfText_setUnicodeString(equiped_items->items[2], equiped_items->equiped_items->chest->name);
	}
	if (equiped_items->equiped_items->legs != NULL) {
		sfText_setUnicodeString(equiped_items->items[3], equiped_items->equiped_items->legs->name);
	}
	if (equiped_items->equiped_items->ring_1 != NULL) {
		sfText_setUnicodeString(equiped_items->items[4], equiped_items->equiped_items->ring_1->name);
	}
	if (equiped_items->equiped_items->ring_2 != NULL) {
		sfText_setUnicodeString(equiped_items->items[5], equiped_items->equiped_items->ring_2->name);
	}
}

void equiped_items_draw(sfRenderWindow *window, equiped_items_display *equiped_items)
{
	sfRenderWindow_drawRectangleShape(window, equiped_items->background, NULL);
	for (int i = 0; i < 6; i++) {
		sfRenderWindow_drawText(window, equiped_items->titles[i], NULL);
	}
	for (int i = 0; i < 6; i++) {
		sfRenderWindow_drawText(window, equiped_items->items[i], NULL);
	}
}