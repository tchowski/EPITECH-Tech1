/*
** EPITECH PROJECT, 2018
** textsprite.c
** File description:
** textesprite
*/

#include "../my_screen.h"

void my_sprite(void)
{
	back = sfTexture_createFromFile("Sprite/back_t.png", NULL);
	annanas = sfTexture_createFromFile("Sprite/ananas.png", NULL);
	bacon = sfTexture_createFromFile("Sprite/beacon.png", NULL);
	avocat = sfTexture_createFromFile("Sprite/avocat.png", NULL);
	pain_haut = sfTexture_createFromFile("Sprite/pain_haut.png", NULL);
	pain_bas = sfTexture_createFromFile("Sprite/pain_bas.png", NULL);
	fromage = sfTexture_createFromFile("Sprite/fromage.png", NULL);
	poulet = sfTexture_createFromFile("Sprite/poulet.png", NULL);
	ketchup = sfTexture_createFromFile("Sprite/ketchup.png", NULL);
	oeuf = sfTexture_createFromFile("Sprite/oeuf.png", NULL);
	menthe = sfTexture_createFromFile("Sprite/menthe.png", NULL);
	champi = sfTexture_createFromFile("Sprite/champignon.png", NULL);
	moutarde = sfTexture_createFromFile("Sprite/moutarde.png", NULL);
	olive_b = sfTexture_createFromFile("Sprite/olives_b.png", NULL);
	ognion = sfTexture_createFromFile("Sprite/ognion.png", NULL);
	ognion_b = sfTexture_createFromFile("Sprite/ognion_b.png", NULL);
	salade = sfTexture_createFromFile("Sprite/salade.png", NULL);
	salami = sfTexture_createFromFile("Sprite/salami.png", NULL);
	saumon = sfTexture_createFromFile("Sprite/saumon.png", NULL);
	steak = sfTexture_createFromFile("Sprite/steak.png", NULL);
	tomate = sfTexture_createFromFile("Sprite/tomate.png", NULL);
	cook = sfTexture_createFromFile("Sprite/cook.jpg", NULL);
	cook_p = sfSprite_create();
        back_p = sfSprite_create();
        annanas_p = sfSprite_create();
        bacon_p = sfSprite_create();
        avocat_p = sfSprite_create();
        pain_haut_p = sfSprite_create();
        pain_bas_p = sfSprite_create();
        fromage_p = sfSprite_create();
        poulet_p = sfSprite_create();
        oeuf_p = sfSprite_create();
        ketchup_p = sfSprite_create();
        menthe_p = sfSprite_create();
        champignon_p = sfSprite_create();
        moutarde_p = sfSprite_create();
        olive_b_p = sfSprite_create();
        ognion_p = sfSprite_create();
        ognion_b_p = sfSprite_create();
        tomate_p = sfSprite_create();
        salade_p = sfSprite_create();
        salami_p = sfSprite_create();
        saumon_p = sfSprite_create();
        steak_p = sfSprite_create();
	sfSprite_setTexture(cook_p, cook, sfTrue);
        sfSprite_setTexture(back_p, back, sfTrue);
        sfSprite_setTexture(annanas_p, annanas, sfTrue);
        sfSprite_setTexture(bacon_p, bacon , sfTrue);
        sfSprite_setTexture(avocat_p, avocat , sfTrue);
        sfSprite_setTexture(pain_haut_p, pain_haut , sfTrue);
        sfSprite_setTexture(pain_bas_p, pain_bas , sfTrue);
        sfSprite_setTexture(fromage_p, fromage , sfTrue);
        sfSprite_setTexture(poulet_p, poulet , sfTrue);
        sfSprite_setTexture(oeuf_p, oeuf , sfTrue);
        sfSprite_setTexture(ketchup_p, ketchup , sfTrue);
        sfSprite_setTexture(menthe_p, menthe , sfTrue);
        sfSprite_setTexture(champignon_p, champi, sfTrue);
        sfSprite_setTexture(moutarde_p, moutarde , sfTrue);
        sfSprite_setTexture(olive_b_p, olive_b , sfTrue);
        sfSprite_setTexture(ognion_p, ognion , sfTrue);
        sfSprite_setTexture(ognion_b_p, ognion_b , sfTrue);
        sfSprite_setTexture(salade_p, salade , sfTrue);
        sfSprite_setTexture(salami_p, salami , sfTrue);
        sfSprite_setTexture(saumon_p, saumon , sfTrue);
        sfSprite_setTexture(steak_p, steak , sfTrue);
        sfSprite_setTexture(tomate_p, tomate , sfTrue);
}
