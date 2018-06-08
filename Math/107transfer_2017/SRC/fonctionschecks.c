/*
** EPITECH PROJECT, 2018
** transfer
** File description:
** fonctions check
*/

#include "../include/allh.h"

int checkarg1(char* av)
{
	int i = my_strlen(av) - 1;
	int a =  i;
	int v = 0;
	while (v <= i) {
		if (av[0] == '*' || av[a] == '*') {
			printf("Erreur\n");
			return (-1);
		}
		if (av[i] == '*' && av[i - 1] == '*') {
			printf("Erreur\n");
			return (-1);
		}
		if ((av[i] < 48 && av[i] != '*' && av[i] != '-') || (av[i] > 57)) {
			printf("Erreur\n");
			return (-1);
		}
		else
			return (1);
		i--;
	}
}

int checkarg(int ac, char** av)
{
	int i = 1;
	int v;
	while (i < ac) {
		v = checkarg1(av[i]);
		if (v == -1)
			return (v);
		else
			i++;
	}
	return (v);
}
