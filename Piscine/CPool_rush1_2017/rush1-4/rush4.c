/*
** EPITECH PROJECT, 2017
** rush 4
** File description:
** square
*/

int my_put_error(void);

int error_check(int x, int y);

void exterior_line_one(int x);

void exterior_line_non_one(int x);

void my_putchar(char c);

void make_lines_spaced(int x, int y)
{
	int nby = 1;
	int nbx = 0;

	while (nby < y - 1) {
		my_putchar('B');
		while (nbx < x - 2) {
			my_putchar(' ');
			nbx++;
		}
		my_putchar('B');
		my_putchar('\n');
		nbx = 0;
		nby++;
	}
}

void make_inside_lines(int x, int y)
{
	int nby = 1;

	if (x == 1) {
		while (nby < y - 1) {
			my_putchar('B');
			my_putchar('\n');
			nby++;
		}
		return;
	}
	make_lines_spaced(x, y);
}

void make_outside_line(int x, int y)
{
	if (y == 1 || x == 1)
		exterior_line_one(x);	
	else 
		exterior_line_non_one(x);
}

void rush(int x, int y)
{
	int error;

	error = error_check(x, y);
	if (error == 1)
		return;
	make_outside_line(x, y);
	my_putchar('\n');
	if (y == 1)
		return;
	make_inside_lines(x, y);
	make_outside_line(x, y);
	my_putchar('\n');
}
