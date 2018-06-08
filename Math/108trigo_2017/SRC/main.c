/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "../include/trigo.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	if (argc %2 == 1 || argc <= 2) {
		printf("You should put a pair nomber of arguments or put more than 3 arguments.\n");
		exit(84);
	}
	float tab[argc - 2];
	int i = 2;
	while(i != argc) {
		checkarg(argv[i]);
		tab[i - 2] = atoi(argv[i]);
		i++;
	}
	switch_fonct(argv);
	return (0);
}
