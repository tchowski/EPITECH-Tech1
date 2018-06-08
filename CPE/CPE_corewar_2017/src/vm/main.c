/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** the main function
*/

#include <vm.h>

int main(int ac, char **av)
{
	if (check_args(ac, av) == -1)
		return (84);
	return (0);
}
