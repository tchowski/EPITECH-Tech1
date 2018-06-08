/*
** EPITECH PROJECT, 2017
** rush3
** File description:
** ascii square 3
*/

int error_check(int x, int y);

void parser(int x, int y);

void rush(int x, int y)
{
	int error;

	error = error_check(x, y);
	if (error == 1)
		return;
	parser(x, y);
}
