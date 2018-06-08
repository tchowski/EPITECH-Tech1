/*
** EPITECH PROJECT, 2017
** rush1
** File description:
** writing fuctions for rush 1
*/

void my_putchar(char c);

void make_outside_line(int x, int y, char first_char, char last_char)
{
	int nb = 1;

	if (y == 1) {
		my_putchar(first_char);
		while (nb < x) {
			my_putchar('-');
			nb++;
		}
		my_putchar(last_char);
		return;
	}
	my_putchar(first_char);
	while (nb < x - 1) {
		my_putchar('-');
		nb++;
	}
	my_putchar(last_char);
}

void make_line_spaced(int x, int y)
{
	int nbx = 0;
	int nby = 1;

	while (nby < y - 1) {
		my_putchar('|');
		while (nbx < x - 2) {
			my_putchar(' ');
			nbx++;
		}
		my_putchar('|');
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
			my_putchar('|');
			my_putchar('\n');
			nby++;
		}
		return;
	}
	make_line_spaced(x, y);
}

int x_is_one(int x, int y)
{
	my_putchar('o');
	my_putchar('\n');
	if (y == 1)
		return (1);
	make_inside_line(x, y);
	my_putchar('o');
	my_putchar('\n');
	return (0);
}
