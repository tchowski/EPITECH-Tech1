/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
	if(ac != 2) {
		error("Error: ");
		return(error(" not enought arguments.\n"));
	}
	int i = 1;
	while (av[1][i]) {
		if (same_char(av[1][0], av[1][i]) == 1)
			return(my_putstr("palindrome!\n"));
		i++;
	}
	if (same_char(av[1][0], av[1][i]) == 0)
		return(my_putstr("not a palindrome.\n"));

	return(0);
}
