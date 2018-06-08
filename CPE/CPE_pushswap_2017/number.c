/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
#include "include/my_push_swap.h"

int number(char *str)
{
	int i = 0;
	int result;
	int j = 1;
	result = 0;

	while (str[i] == '-'){
		while(str[j] >= '0' && str[j] <= '9'){
			result = (result * 10) + ((str[j] - 48));
					j++;
					}
		result = result * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + ((str[i]) - 48);
		i++;
	}
	return (result);
}
