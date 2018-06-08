/*
** EPITECH PROJECT, 2017
** my_screen.h
** File description:
** my_screen
*/

#include <SFML/Graphics.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include <time.h>

void	my_putchar(char c);
int	my_putstr(char *str);
void	print_main(void);
void print_h();
void print_d();
void display_fonc(int ac, char **av);

	sfRenderWindow	*window;
         sfVideoMode     video_mode;
         sfTexture       *texture;
         sfSprite        *sprite;
         sfSoundBuffer   *soundbuffer;
         sfSound         *sound;
         sfEvent          event;
         sfTexture       *duck;
         sfSprite        *ducksprite;
         sfVector2f       pos;
         sfIntRect       rect;
         sfVector2f      dep;
         sfSoundBuffer   *shoot;
	 sfSound         *soundduck;
