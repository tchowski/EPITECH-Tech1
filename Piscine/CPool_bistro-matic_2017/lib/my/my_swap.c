/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** Swap
*/

void	my_swap(int *a, int *b)
{
	int tampon;

	tampon = *a;
	*a = *b;
	*b = tampon;
}
