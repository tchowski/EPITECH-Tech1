/*
** EPITECH PROJECT, 2018
** my_rpg
** File description:
** my_rpg
*/

#include "sfml_functions.h"

sfVector2f sfVector2f_create(float x, float y)
{
	sfVector2f vector;
	
	vector.x = x;
	vector.y = y;
	return vector;
}

sfVector2i sfVector2i_create(int x, int y)
{
	sfVector2i vector;

	vector.x = x;
	vector.y = y;
	return vector;
}

sfVector3f sfVector3f_create(float x, float y, float z)
{
	sfVector3f vector;

	vector.x = x;
	vector.y = y;
	vector.z = z;
	return vector;
}

sfFloatRect sfFloatRect_create(float left, float top, float width, float height)
{
	sfFloatRect rect;

	rect.left = left;
	rect.top = top;
	rect.width = width;
	rect.height = height;
	return rect;
}