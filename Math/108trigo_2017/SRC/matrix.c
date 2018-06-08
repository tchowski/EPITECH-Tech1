/*
** EPITECH PROJECT, 2018
** matrix.c
** File description:
** matrix
*/

//#include "trigo.h"
#include <stdio.h>
#include <stdlib.h>

float	**my_malloc_float(int, int);
void	print_int_tab(float **tab, int nb);
void	put_nb(float **tab, int nb);
float	**argc_arg(int argc, char **argv);
float	**matrix(int nb);
void	calc_matrix(float **mat, float **tab, int argc);

void	print_int_tab(float **tab, int nb)
{
	int i = 0;
	int k = 0;

	while (i != nb) {
		while (k != nb) {
			printf("%f\t", tab[i][k]);
			//**(tab + 1);
			k++;
		}
		k = 0;
		//*(tab + 1);
		printf("\n");
		i++;
	}
}

void	put_nb(float **tab, int nb)
{
	int i = 0;
	int k = 0;
	int j = 0;

	while (i != nb) {
		tab[k][j] = 1;
		k++;
		j++;
		i++;
	}
}

float	**argc_arg(int argc, char **argv)
{
	float **tab = my_malloc_float(argc, argc);
	int i = 0;
	int k = 0;
	int j = 1;
	argc = argc / 2;

	while (k != argc) {
		while (i != argc) {
			tab[k][i] = atoi(argv[j]);
			i++;
			j++;
		}
		i = 0;
		k++;
	}
	return(tab);
}

float	**matrix(int nb)
{
	int i = 0;
	int k = 0;
	float **mat;
	nb = nb / 2;
	mat = my_malloc_float(nb, nb);

	while (k != nb) {
		while (i != nb) {
			mat[k][i] = 0;
			//**(mat + 1);
			i++;
		}
		i = 0;
		//*(mat + 1);
		k++;
	}
	put_nb(mat, nb);
	return(mat);
}

void	calc_matrix(float **mat, float **tab, int argc)
{
	int i = 0;
	int k = 0;
	int j = 0;
	argc = argc / 2;

	while (k != argc) {
		while (i != argc) {
			tab[k][i] = tab[k][i] + mat[k][i];
			i++;
		}
		i = 0;
		k++;
	}
	print_int_tab(tab, argc);
}

int main(int argc, char **argv)
{
	argc_arg(argc, argv);
	matrix(argc - 1);
	calc_matrix(matrix(4), argc_arg(argc, argv), argc);
	return(0);
}
