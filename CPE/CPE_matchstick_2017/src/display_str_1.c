/*
** EPITECH PROJECT, 2018
** display_str_1.c
** File description:
** display_str_1
*/

#include "my.h"
#include <unistd.h>

void	display_str_1(char *str)
{
	write(1, str, my_strlen(str));
}
