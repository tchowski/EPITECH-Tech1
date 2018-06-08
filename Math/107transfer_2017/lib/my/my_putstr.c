/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** putstr 
*/

#include <unistd.h>
#include "../../include/my.h"

int my_putstr(char const *str)
{
	int i = 0;
	while (str[i]) {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}
