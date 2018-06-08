/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** put a number and show him
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_put_nbr (int nb)
{
	int rev_nb = 0;
	int count = 0;

	if (nb == 0)
		my_putchar('0');
	else if (nb < 0) {
		nb = -1 * nb;
		my_putchar('-');
	}
	while (nb >= 1) {
		rev_nb = (rev_nb * 10) + (nb % 10);
		nb = nb / 10;
		count++;
	}
	while (count != 0) {
		my_putchar((rev_nb % 10) + '0');
		rev_nb = rev_nb / 10;
		count--;
	}
}

int main()
{
	int i = -400004;

	 my_put_nbr(i);
	return (0);

}
