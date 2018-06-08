/*
** EPITECH PROJECT, 2018
** error.c
** File description:
** error
*/

#include <unistd.h>
#include <string.h>

void	my_puterror(const char *str)
{
	write(2, str, strlen(str));
}
