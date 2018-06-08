/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** Prints the *s pointer passed as parameter [ANSI]
*/

#include <unistd.h>
#include <my.h>

int	my_putstr(char const *str)
{
	write(1, str, my_strlen(str));
	return (0);
}
