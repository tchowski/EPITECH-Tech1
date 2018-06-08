/*
** EPITECH PROJECT, 2017
** rush 1
** File description:
** checking values for line writing
*/

int x_is_one(int x, int y);

void make_inside_line(int x, int y);

void make_outside_line(int x, int y, char first_char, char last_char);

void my_putchar(char c);

int check_if_one(int x, int y)
{
	int checkme;

	if (x == 1) {
		checkme = x_is_one(x, y);
		if (checkme == 1)
			return (1);
	}
}

void parser(int x, int y)
{
	int checkme;

	checkme == check_if_one(x, y);
	if (checkme == 1)
		return;
	make_outside_line(x, y, 'o', 'o');
	my_putchar('\n');
	if (y == 1)
		return;
	make_inside_line(x, y);
	make_outside_line(x, y, 'o', 'o');
}
