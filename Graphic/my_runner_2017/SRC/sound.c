/*
** EPITECH PROJECT, 2018
** sound.c
** File description:
** sound
*/

#include "../my_screen.h"

void sound_t(void)
{
	soundbuffer = sfSoundBuffer_createFromFile("Music/deja.ogg");
    	sound = sfSound_create();
        sfSound_setBuffer(sound, soundbuffer);
        sfSound_getLoop(sound);
        sfSound_setLoop(sound, sfTrue);
        sfSound_play(sound);
}
