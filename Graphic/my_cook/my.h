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
void my_set_pos(void);
void prep_food(void);
int prep_fromage(int bol);
int prep_pain_bas(int bol);
int prep_pain_haut(int bol);
int prep_salade(int bol);
int prep_steak(int bol);
int prep_tomate(int bol);
void check_food(void);
int check_hamburger(int score);
int check_cheesburger(int score);
int main_screen(void);

typedef struct f_s {
	float y;
	float j;
	float i;
	float k;
} f_t;

	sfRenderWindow	*window;
	sfVideoMode	video_mode;
	//HITBOX

	sfIntRect rect;
	// rect.top = 0;
	// rect.left = 0;
	// rect.width = 113;
	// rect.height = 39;
	//void (*callback)();
	//button_t	button;

	//TEXTURE
	//sfEvent		*event;


        sfTexture       *back;
	sfTexture	*pain_haut;
	sfTexture	*pain_bas;
	sfTexture	*fromage;
	sfTexture	*salade;
	sfTexture	*steak;
	sfTexture	*tomate;

	//SPRITE

        sfSprite        *back_p;
        sfSprite        *pain_haut_p;
        sfSprite        *pain_bas_p;
        sfSprite        *fromage_p;
        sfSprite        *salade_p;
        sfSprite        *steak_p;
        sfSprite        *tomate_p;
        sfEvent         event;
	sfEvent 	click;

	//VECTORS

	sfVector2f 	clickPosition;
	sfVector2f	pos_rect;
	sfVector2f	size_rect;
	sfVector2f	mouse_button;
	sfVector2f	spawn;
	sfVector2f	pos_fromage;
	sfVector2f	pos_pain_bas;
	sfVector2f	pos_pain_haut;
	sfVector2f	pos_salade;
	sfVector2f	pos_steak;
	sfVector2f	pos_tomate;
