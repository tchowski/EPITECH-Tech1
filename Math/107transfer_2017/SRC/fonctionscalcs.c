/*
** EPITECH PROJECT, 2018
** transfer
** File description:
** fonctions calculatoires
*/

#include "../include/allh.h"

int caclnbnbs(char* str)
{
	int i = 0;
	int v = 1;
	while (str[i] != '\0') {
		if (str[i] == '*')
			v++;
		i++;
	}
	return (v);
}


double calcarg(char *av, double x)
{
	int size_nb =caclnbnbs(av);
	double *tab = stock_int(av, size_nb);
	double res = 0;
	int k = size_nb;
	res = tab[k];
	while (k > 0) {
		res = (res * x) + tab[k - 1];
		k--;
	}
	return (res);
}
double   *stock_int(char *str, int size_nb)
{
	double *tab = malloc(sizeof(double) * size_nb);
	char **ptr;
	int i, j;
	i = 0;
	j = 0;
	ptr = str_to_space(str);
	while (ptr[i] != 0) {
		tab[j] = atoi(ptr[i]);
		i++;
		j++;
	}
        return(tab);
	free(tab);
}

double calcresult(int ac, char **av, double x)
{
	ac = ac - 1;
	int i = 1;
	double res = 1;
	double test;
	while (ac >= 1) {
		if (i = 1) {
			test = calcarg(av[ac], x);
			res = res * (1/test);
			i == 2;
			ac--;
		}
		if (i = 2) {
			res = res * calcarg(av[ac], x);
			i == 1;
			ac--;
		}
	}
	return (res);
}


int avancex(int ac, char ** av)
{
	double x = 0;
	double resultat = 0;
	while (x < 1.001) {
		resultat = calcresult(ac, av, x);
		printf("%.3g -> %.5f\n", x, resultat);
		x = x + 0.001;
	}
	return (0);
}
