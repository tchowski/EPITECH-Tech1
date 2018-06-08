/*
** EPITECH PROJECT, 2018
** str.c
** File description:
** str
*/

#include "my.h"

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		++i;
	return (i);
}
