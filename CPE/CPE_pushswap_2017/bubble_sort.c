/*
** EPITECH PROJECT, 2017
** bubble_sort.c
** File description:
** bubble_sort
*/

#include "include/my_push_swap.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	swap_elem (int *array, int index1, int index2)
{
	my_swap(&array[index1], &array[index2]);
}

void bubble_loop(int *array, int i, int size)
{
	for (int j = 0; j < size-i-1; j++) {
		if (array[j] > array [j + 1]) {
			swap_elem(array, j, j + 1);
		}
	}
}

void bubble_sort_array(int *array, int size)
{
	for(int i = 0; i < size -1; i++)
		bubble_loop(array, i, size);
}

void move_array_to_b(int *array, int argc)
{
	int *array_b = NULL;
	int i = 0;

	array_b = malloc(sizeof(int) * argc * 2);
	while (array[i] <=argc) {
		array_b[i] = array[i];
		i++;
	}
	print_b(array_b, argc);
	if (array_b[1] > array_b[2]) {
		my_swap(&array[1], &array[2]);
		print_result("sb");
	}
	bubble_sort_array(array_b, argc);
	while (array_b[i] <= argc) {
		array[i] = array_b[i];
		i++;
	}
	print_a(array, argc);
	free(array_b);
}

void bubu(int argc, char **argv)
{
	int i = 0;
	int k = 0;
	int *array = malloc(sizeof(int) * argc * 2);

	while (argv[i] != NULL) {
		array[k] = number(argv[i]);
		i++;
		k++;
	}
	//check_error(array, argc);
	if (array[1] > array[2]) {
		my_swap(&array[1], &array[2]);
		print_result("sa");
	}
	move_array_to_b(array, argc);
	free(array);
}
