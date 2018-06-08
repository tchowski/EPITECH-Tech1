/*
** EPITECH PROJECT, 2018
** my_malloc.c
** File description:
** my_malloc
*/

//#include "my.h"
#include <stdlib.h>
#include <stdio.h>

char	**my_malloc(int lines, int cols)
{
	char **array = NULL;
	int i = 0;

	array = malloc(sizeof(char *) * lines + 1);
	while(i <= cols) {
		array[i] = malloc(sizeof(char) * cols + 1);
		i++;
	}
	return(array);
}

float	**my_malloc_float(int lines, int cols)
{
	float **array = NULL;
	int i = 0;

	array = malloc (sizeof(float *) * lines + 1);
	while (i <= cols) {
		array[i] = malloc(sizeof(float) * cols + 1);
		i++;
	}
	return(array);
}
