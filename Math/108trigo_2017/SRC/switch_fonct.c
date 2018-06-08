/*
** EPITECH PROJECT, 2018
** switch_fonct.c
** File description:
** switch
*/

#include <stdio.h>
#include <stdlib.h>
#include "../include/trigo.h"

void	switch_fonct(char **argv)
{
	if (my_strcmp(argv[1], "SINH") == 0)
		printf("SIN\n");
	else if (my_strcmp(argv[1], "COS") == 0)
		printf("COS\n");
	else if (my_strcmp(argv[1], "SINH") == 0)
		printf("SINH\n");
	else if (my_strcmp(argv[1], "EXP") == 0)
		printf("EXP\n");
	else if (my_strcmp(argv[1], "SIN") == 0)
		printf("SIN\n");
	else {
		printf("You sould put a valid argument.\n");
		exit(84);
	}
}

