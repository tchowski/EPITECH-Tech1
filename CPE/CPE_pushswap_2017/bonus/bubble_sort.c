/*
** EPITECH PROJECT, 2017
** bubble_sort.c
** File description:
** bubble_sort
*/

#include <criterion/criterion.h>
#include <unistd.h>
#include <stdio.h>

void 	my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	swap_elem (int *array, int index1, int index2)
{
	my_swap(&array[index1], &array[index2]);
}

void bubble_loop(int *array, int i, int size)
{
	for (int j = 0; j < size-i-1; j++) {
		if (array[j] > array [j + 1])
			swap_elem(array, j, j + 1);
	}
}

void bubble_sort_array(int *array, int size)
{
	for(int i = 0; i < size -1; i++)
		bubble_loop(array, i, size);
}

void	print(int *array, int size)	
{
	int i;
	for ( i=0; i < size; i++)
		printf("%d", array[i]);
}

int main ()
{
	int str[4] = { 9, 7, 5, 3};
	bubble_sort_array(str, 4);
	print(str, 4);
}
