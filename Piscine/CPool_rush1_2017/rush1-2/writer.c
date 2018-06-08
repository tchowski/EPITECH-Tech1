/*
** EPITECH PROJECT, 2017
** rush2
** File description:
** writing fuctions for rush 2
*/

void my_putchar(char c);

void make_outside_line(int x, int y, char first_char, char last_char)
{
	int nb = 1;

	if (y == 1) {
		while (nb < x + 1) {
			my_putchar('*');
			nb++;
		}
		return;
	}
	my_putchar(first_char);
	while (nb < x - 1) {
		my_putchar('*');
		nb++;
	}
	my_putchar(last_char);
}

void make_line_spaced(int x, int y)
{
	int nbx = 0;
	int nby = 1;

	while (nby < y - 1) {
		my_putchar('*');
		while (nbx < x - 2) {
			my_putchar(' ');
			nbx++;
		}
		my_putchar('*');
		my_putchar('\n');
		nbx = 0;
		nby++;
	}
}
void make_inside_line(int x, int y)
{
	int nby = 1;

	if (x == 1) {
		while (nby < y - 1) {
			my_putchar('*');
			my_putchar('\n');
			nby++;
		}
		return;
	}
	make_line_spaced(x, y);
}
