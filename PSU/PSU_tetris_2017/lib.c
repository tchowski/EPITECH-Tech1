/*
** EPITECH PROJECT, 2018
** lib.c
** File description:
** lib
*/

#include "my.h"

void	aff_tetris(char *buffer)
{
	int i = 6;

	while (buffer[i]) {
		my_putchar(buffer[i]);
		i++;
	}
}

void	aff_name(char *buffer)
{
	int i = 0;

	while (buffer[i] != '.') {
		my_putchar(buffer[i]);
		i++;
	}
}

int	my_sort(char *a, char *b)
{
	int i = 0;

	while (a[i] != 0 && b[i] != 0 && a[i] == b[i])
		i++;
	if (a[i] == b[i])
		return(0);
	else
		return (a[i] - b[i]);
}

void	swap(void **a, void **b)
{
	void *j = *a;
	*a = *b;
	*b = j;
}
