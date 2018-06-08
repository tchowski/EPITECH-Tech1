/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Prints an int given as parameter
*/

void	my_putchar(char c);

int my_put_nbr(int n)
{
	int x = 10;

	if (n < 0) {
		n = n * -1;
		my_putchar('-');
	}
	if (n == 0) {
		my_putchar('0');
		return (0);
	}
	if (n / x > 0)
		my_put_nbr(n / x);
	my_putchar(n % x + '0');
	return (0);
}
