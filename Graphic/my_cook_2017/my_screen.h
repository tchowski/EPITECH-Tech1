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
void 	print_h();
void 	print_d();
void 	display_fonc(int ac, char **av);
void 	destroy(void);
void 	stat(void);
void 	sound_t(void);
void 	my_clock(void);
void 	my_sprite(void);
void 	my_repeat(void);
void 	my_window(void);
void 	my_render(void);
void 	my_set_pos(void);
void 	prep_food(void);
int 	prep_ananas(int bol);
int 	prep_bacon(int bol);
int 	prep_avocat(int bol);
int 	prep_champi(int bol);
int 	prep_oeuf(int bol);
int 	prep_ognion(int bol);
int 	prep_menthe(int bol);
int 	prep_ketchup(int bol);
int 	prep_moutarde(int bol);
int 	prep_ognion_rings(int bol);
int 	prep_fromage(int bol);
int 	prep_pain_bas(int bol);
int 	prep_pain_haut(int bol);
int 	prep_poulet(int bol);
int 	prep_salade(int bol);
int 	prep_salami(int bol);
int 	prep_saumon(int bol);
int 	prep_steak(int bol);
int 	prep_tomate(int bol);
void 	check_food(void);
int 	check_hamburger(int score);
int 	check_cheesburger(int score);
void 	my_stats_menu(void);

typedef struct f_s {
	float y;
	float j;
	float i;
	float k;
} f_t;

	sfRenderWindow	*window;
        sfVideoMode     video_mode;
	sfIntRect rect;
        sfTexture       *back;
        sfTexture       *annanas;
	sfTexture	*bacon;
	sfTexture	*avocat;
	sfTexture	*pain_haut;
	sfTexture	*pain_bas;
	sfTexture	*fromage;
	sfTexture	*poulet;
	sfTexture	*ketchup;
	sfTexture	*oeuf;
	sfTexture	*menthe;
	sfTexture	*champi;
	sfTexture	*moutarde;
	sfTexture	*olive_b;
	sfTexture	*ognion;
	sfTexture	*ognion_b;
	sfTexture	*salade;
	sfTexture	*salami;
	sfTexture	*saumon;
	sfTexture	*steak;
	sfTexture	*tomate;
	sfTexture	*cook;
	sfSprite	*cook_p;
        sfSprite        *back_p;
        sfSprite        *annanas_p;
        sfSprite        *bacon_p;
        sfSprite        *avocat_p;
        sfSprite        *pain_haut_p;
        sfSprite        *pain_bas_p;
        sfSprite        *fromage_p;
        sfSprite        *poulet_p;
        sfSprite        *oeuf_p;
        sfSprite        *ketchup_p;
        sfSprite        *menthe_p;
        sfSprite        *champignon_p;
        sfSprite        *moutarde_p;
        sfSprite        *olive_b_p;
        sfSprite        *ognion_p;
        sfSprite        *ognion_b_p;
        sfSprite        *salade_p;
        sfSprite        *salami_p;
        sfSprite        *saumon_p;
        sfSprite        *steak_p;
        sfSprite        *tomate_p;
        sfEvent         event;
	sfEvent 	click;
	sfVector2f 	clickPosition;
	sfVector2f	pos_rect;
	sfVector2f	size_rect;
	sfVector2f	mouse_button;
	sfVector2f	spawn;
        sfVector2f      pos_annanas;
	sfVector2f	pos_avocat;
	sfVector2f	pos_bacon;
	sfVector2f	pos_champi;
	sfVector2f	pos_fromage;
	sfVector2f	pos_ketchup;
	sfVector2f	pos_menthe;
	sfVector2f	pos_moutarde;
	sfVector2f	pos_oeuf;
	sfVector2f	pos_ognion_b;
	sfVector2f	pos_ognion;
	sfVector2f	pos_olives;
	sfVector2f	pos_pain_bas;
	sfVector2f	pos_pain_haut;
	sfVector2f	pos_poivron;
	sfVector2f	pos_poulet;
	sfVector2f	pos_salade;
	sfVector2f	pos_salami;
	sfVector2f	pos_saumon;
	sfVector2f	pos_steak;
	sfVector2f	pos_tomate;
        sfSoundBuffer   *soundbuffer;
        sfSound         *sound;
	sfClock		*clock_cook;
	sfIntRect	rect_cook;

