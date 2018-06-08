/*
** EPITECH PROJECT, 2018
** cut.c
** File description:
** cut
*/

#include "my.h"
#include <stdio.h>
#include <string.h>

void	cut(char **my_map)
{
	my_strcat(my_map[1], my_map[2]);
	my_strcat(my_map[3], my_map[4]);
	my_strcat(my_map[5], my_map[6]);
	my_strcat(my_map[7], my_map[8]);
	my_map[1][4] = '\0';
	my_map[3][4] = '\0';
	my_map[5][4] = '\0';
	my_map[7][4] = '\0';
}
