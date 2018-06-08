/*
** EPITECH PROJECT, 2018
** 108_trigo
** File description:
** fonctions checks
*/

#include "../include/trigo.h"
#include <stdlib.h>
#include <stdio.h>

void checkarg(char* av)
{
	int i = 0;

	while(av[i] != '\0') {
		if ((av[i] < 48 && av[i] != '-') || av[i] > 57) {
			printf("You should put a valid argument.\n");
			exit(84);
		}
		else
			i++;
	}
}
