/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** Swap
*/

#include <stdio.h>

void	my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a;
	int b;
	int *str;
	int *str2;

	a = 7;
	b = 5;

	str = &a;
	str2 = &b;

	my_swap(str, str2);

	printf("%d, %d", *str, *str2);

}
