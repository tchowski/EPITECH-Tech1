/*
** EPITECH PROJECT, 2017
** rush3
** File description:
** ascii square 2
*/

int error_check(int x, int y);

void make_inside_line(int x, int y);

void make_outside_line(int x, int y, char first_char, char ext_char);

void rush(int x, int y)
{
	int error;

	error = error_check(x, y);
	if (error == 1)
		return;
	make_outside_line(x, y, '/', '\\');
	my_putchar('\n');
	if (y == 1)
		return;
	make_inside_line(x, y);
	make_outside_line(x, y, '\\', '/');
	my_putchar('\n');
}
