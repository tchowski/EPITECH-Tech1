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
void destroy(void);
void stat(void);
void sound_t(void);
void my_clock(void);
void my_sprite(void);
void my_repeat(void);
void my_window(void);
void my_render(void);

typedef struct {
	float y;
	float j;
	float i;
	float k;
} f_t;

	sfRenderWindow	*window;
        sfVideoMode     video_mode;
        sfTexture       *sky;
        sfSprite        *sky_p;
	sfTexture	 *mario;
	sfSprite	 *mario_p;
        sfSoundBuffer   *soundbuffer;
        sfSound         *sound;
        sfEvent          event;
        sfTexture       *vege;
        sfSprite        *vege_p;
	sfTexture	 *ground;
	sfSprite	 *ground_p;
        sfVector2f       pos;
        sfIntRect        rect_sky;
	sfIntRect	 rect_vege;
	sfIntRect	 rect_ground;
	sfIntRect	 rect_mario;
        sfVector2f       dep;
        sfSoundBuffer   *shoot;
	sfSound         *soundduck;
	sfClock		*sprite_sky;
	sfClock		*sprite_vege;
	sfClock		*sprite_ground;
	sfClock		*sprite_mario;
	sfClock		*mario_pp;
