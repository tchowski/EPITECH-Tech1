/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** Swap
*/

#include "include/my_push_swap.h"

void	my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
