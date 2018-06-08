/*
** EPITECH PROJECT, 2018
** my_world
** File description:
** my_world
*/

#ifndef SFML_FUNCTIONS_H_
#define SFML_FUNCTIONS_H_

#include <SFML/Graphics.h>

sfVector2f sfVector2f_create(float x, float y);

sfVector2i sfVector2i_create(int x, int y);

sfVector3f sfVector3f_create(float x, float y, float z);

sfVector2f veci_to_vecf(sfVector2i a);

sfFloatRect sfFloatRect_create(float left, float top, float width, float height);

sfTime sfTime_sub(sfTime a, sfTime b);

sfColor sfColor_create(unsigned char r, unsigned char g, unsigned char b, unsigned char a);

sfUint32 *str_to_unicode(char *str);

#endif
