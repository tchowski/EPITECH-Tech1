/*
** EPITECH PROJECT, 2018
** display_path.c
** File description:
** display_path
*/

#include "my.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void display_path(char **str)
{
	for (int i = 0; str[i] != 0; i++) {
		my_putstr(str[i]);
	}
}
