/*
** EPITECH PROJECT, 2017
** rush 3
** File description:
** checking values for line writing
*/

void make_inside_line(int x, int y);

void make_outside_line(int x, int y, char first_char, char last_char);

void my_putchar(char c);

int check_if_one(int x, int y)
{
	if (x == 1) {
		make_outside_line(x, y, 'A', 'A');
		return (1);
	}
	return (0);	
}
void parser(int x, int y)
{
	make_outside_line(x, y, 'A', 'A');
	my_putchar('\n');
	if (y == 1)
		return;
	make_inside_line(x, y);
	make_outside_line(x, y, 'C', 'C');
	my_putchar('\n');
}
