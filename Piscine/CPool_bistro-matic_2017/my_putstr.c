/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr
*/

#include "my.h"
#include <unistd.h>

void	my_putchar(char c);

void	my_putstr(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0'){
		my_putchar(str[j]);
		j++;
	}
}
