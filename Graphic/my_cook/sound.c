/*
** EPITECH PROJECT, 2018
** sound.c
** File description:
** sound
*/

#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/Time.h>
#include <SFML/System/Vector3.h>
#include "my.h"

void	sound_menu(void)
{
	sfSoundBuffer	*menu;
	sfSound		*sound_menu;
	menu = sfSoundbuffer_createFromFile("");
	sound_menu = sfSound_create();
	sfSound_setBuffer(sound_menu, menu);
	sfSound_setloop(sound_menu);
	sfSound_getLoop(sound_menu, sfTrue);
	sfSound_play(sound_menu);
}

void	sound_game(void)
{
	sfSoundbuffer	*game;
	sfSound		*sound_game;
	game = sfSoundbuffer_createFromFile("");
	sound_game = sfSound_create();
	sfSound_setBuffer(sound_game, game);
	sfSound_setloop(sound_game);
	sfSound_getLoop(sound_game, sfTrue);
	sfSound_play(sound_game);
}

