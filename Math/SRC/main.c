/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main of the 101pong project
*/

#include "include.h"

static int is_all_float(int ac, char **av)
{
	int i = 1;

	while ((i < ac - 1) && my_str_isnum_float(av[i]) == 1) {
		i++;
	}
	if (i == ac - 1)
		return 1;
	return (0);
}

static float *params_to_float_tab(int ac, char **av)
{
	float *ftab = malloc(sizeof(float) * (ac - 1));

	for (int i = 0; i < ac - 1; i++) {
		ftab[i] = my_get_nbr_float(av[i + 1]);
	}
	return (ftab);
}

int main(int ac, char **av)
{
	float *params;

	if (ac != 8)
		return (84);
	if (is_all_float(ac, av) == 0 || my_str_isnum(av[7]) == 0)
		return (84);
	params = params_to_float_tab(ac, av);
	pong(params);
	return (0);
}
