/*
** EPITECH PROJECT, 2018
** display.c
** File description:
**
*/

#include <unistd.h>
#include "my.h"

int error(char *str)
{
	write(2, str, my_putstr(str));
	return(84);
}
