/*
** EPITECH PROJECT, 2017
** screien.c
** File description:
** screen
*/

#include "../my_screen.h"
#include <stdlib.h>

void print_main(void)
{
	dep.x = 10;
	dep.y = 0;
	rect.left = 0;
	rect.top = 0;
	rect.width = 110;
	rect.height = 110;
	pos.x = 0;
	pos.y = rand()%700+1;
	video_mode.width = 1280;
	video_mode.height = 769;
	video_mode.bitsPerPixel = 32;

	window = sfRenderWindow_create(video_mode, "My_Hunter", sfClose, NULL);
	texture = sfTexture_createFromFile("Sprite/background.png", NULL);
	duck = sfTexture_createFromFile("Sprite/duck.png", NULL);
	sprite = sfSprite_create();
	ducksprite = sfSprite_create();
	sfSprite_setTexture(sprite, texture, sfTrue);
	sfSprite_setTexture(ducksprite, duck, sfTrue);
	soundbuffer = sfSoundBuffer_createFromFile("Music/centre_pokemon.ogg");
	sound = sfSound_create();
	sfSound_setBuffer(sound, soundbuffer);
	sfSound_getLoop(sound);
	sfSound_setLoop(sound, sfTrue);
	sfSound_play(sound);
	shoot = sfSoundBuffer_createFromFile("Music/Gun_Shoot.ogg");
	soundduck = sfSound_create();
	sfSound_setBuffer(soundduck, shoot);
	sfSound_setVolume(soundduck, 13.0f);
	sfSound_setAttenuation(soundduck, 100);
	sfClock *sprite_annimation = sfClock_create();
	sfSprite_setTextureRect(ducksprite, rect);
	float j = 0.1;

	while (sfRenderWindow_isOpen(window)) {
		sfRenderWindow_drawSprite(window, sprite, NULL);
		sfRenderWindow_drawSprite(window, ducksprite, NULL);
		sfRenderWindow_display(window);

		while (sfRenderWindow_pollEvent(window, &event)) {
			switch (event.type) {
			case sfEvtClosed :
			       sfRenderWindow_close(window);
			       break;
			}
		}
		if (sfTime_asSeconds(sfClock_getElapsedTime(sprite_annimation)) > j) {
			if (rect.left == 220)
				rect.left = 0;
			else
				rect.left += 110;
			sfSprite_setTextureRect(ducksprite, rect);
			sfSprite_move(ducksprite, dep);
			sfClock_restart(sprite_annimation);
			if (sfMouse_isButtonPressed(sfMouseLeft)) {
				sfVector2i localPosition = sfMouse_getPositionRenderWindow(window);
				sfVector2f posSprite = sfSprite_getPosition(ducksprite);
				if(localPosition.x > posSprite.x && localPosition.x < posSprite.x + rect.width && localPosition.y < posSprite.y + rect.width && localPosition.y > posSprite.y) {
				sfVector2f origin = {0, rand()%700+1};
				sfSprite_setPosition(ducksprite, origin);
				dep.x += 3;
				sfSound_play(soundduck);
				}
			}
		}
			sfVector2f poDuck = sfSprite_getPosition(ducksprite);
			sfVector2u posWin = sfRenderWindow_getSize(window);
			if (poDuck.x > posWin.x) {
				sfRenderWindow_close(window);
				my_putstr("YOU LOOSE !\n");
			}
		}
	sfRenderWindow_destroy(window);
	sfTexture_destroy(duck);
	sfTexture_destroy(texture);
	sfSprite_destroy(sprite);
	sfSprite_destroy(ducksprite);
	sfSound_destroy(sound);
	sfSoundBuffer_destroy(soundbuffer);
	sfSound_destroy(soundduck);
	sfSoundBuffer_destroy(shoot);
	//sfClock_destroy(sprite_annimation);
}
