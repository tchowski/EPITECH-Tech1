/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "include/my_push_swap.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc > 2) {
		if (check_error(argc, argv) == 0) {
			my_putchar('\n');
			exit(84);
		}
		bubu(argc, argv);
		my_putchar('\n');
	}
	if (argc == 2) {
		my_putchar('\n');
		exit (84);
	}
	return (0);
}

_Bool	check_error(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	_Bool false = 0;
	_Bool true = 1;
	int *array = malloc(sizeof(int) * argc * 2);

	while (argv[i] != NULL) {
		array[k] = number(argv[i]);
		i++;
		k++;
	}
	for (int j = 0; j < argc - 1; j++)
		if (array[j] > array[j + 1])
			return (true);
	return (false);
}
