/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** Counts the number of chars in a string and returns it
*/

#include <my.h>

int	my_strlen(char const *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}
