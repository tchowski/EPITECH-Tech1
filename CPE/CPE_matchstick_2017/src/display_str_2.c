/*
** EPITECH PROJECT, 2018
** display_str_1.c
** File description:
** display_str_1
*/

#include "my.h"
#include <unistd.h>

void	error(char *str)
{
	write(2, str, my_strlen(str));
}
