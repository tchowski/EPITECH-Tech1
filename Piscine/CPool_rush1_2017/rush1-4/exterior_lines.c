/*
** EPITECH PROJECT, 2017
** rush 3
** File description:
** exterior lines maker
*/

void my_putchar(char c);

void exterior_line_one(int x)
{
	int nb = 1;

	while (nb < x + 1) {
		my_putchar('B');
		nb++;
	}
}

void exterior_line_non_one(int x)
{
	int nb = 1;

	my_putchar('A');
	while (nb < x - 1) {
		my_putchar('B');
		nb++;
	}
	my_putchar('C');
}
