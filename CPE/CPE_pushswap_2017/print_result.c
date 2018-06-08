/*
** EPITECH PROJECT, 2017
** print_result.c
** File description:
** print_result
*/

#include "include/my_push_swap.h"
#include <stdlib.h>

void print_result(char *str)
{
	static char a = 0;

	if (a == 0)
		a = 1;
	else
		my_putchar(' ');
	my_putstr(str);
}

void print_b(int *array, int size)
{
	int i;

	for (i = 1; i < size; i++)
		print_result("pb");
}

void print_a(int *array, int size)
{
	int i;

	for (i = 1; i < size; i++)
		print_result("pa");
}
