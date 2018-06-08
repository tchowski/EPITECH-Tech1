/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "../my_screen.h"

int main(int ac, char **av)
{
	if(ac > 1)
	display_fonc(ac, av);
	else
		print_main();
	return (0);
}
