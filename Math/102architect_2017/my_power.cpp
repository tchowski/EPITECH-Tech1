/*
** EPITECH PROJECT, 2017
** my_power.c
** File description:
** my_power
*/

int my_pow(int x, int pui)
{
	int y = x;

	if (pui == 0)
		return (1);
	while (pui != 1) {
		x *= y;
		pui--;
	}
	return (x);
}

double my_powf(double x, int pui)
{
	double y = x;

	if (pui == 0)
		return (1);
	while (pui != 1) {
		x *= y;
		pui--;
	}
	return (x);
}
