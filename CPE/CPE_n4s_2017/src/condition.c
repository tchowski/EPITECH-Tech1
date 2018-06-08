/*
** EPITECH PROJECT, 2018
** epitech
** File description:
** movement
*/

#include "n4s.h"

int stop_wall(char **dist)
{
	for (int i = 0; dist != NULL && dist[i]; i++) {
		if (dist[i][0] == '0') {
			my_putstr(STOP);
			return (-1);
		}
	}
	return (0);
}
