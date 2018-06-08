/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
	if(ac > 1)
	display_fonc(ac, av);
	else
		main_screen();
	return (0);
}
