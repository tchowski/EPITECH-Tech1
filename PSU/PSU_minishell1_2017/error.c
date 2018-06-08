/*
** EPITECH PROJECT, 2018
** error.c
** File description:
** error
*/

#include <unistd.h>
#include "my.h"

void error(char *str)
{
	write(2, str, my_strlen(str));
}
