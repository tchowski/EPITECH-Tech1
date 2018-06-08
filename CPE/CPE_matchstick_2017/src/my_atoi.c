/*
** EPITECH PROJECT, 2017
** atoi.c
** File description:
** atoi
*/

#include "my.h"

int my_atoi(char *str)
{
	int i = 0;
	int result = 0;
	int j = 1;

	if (str[0] == '-') {
		while(str[j] >= '0' && str[j] <= '9'){
			result = result * 10 + (str[j] - 48);
			j++;
		}
	result = result * - 1;
	return(result);
	}
	if (str[i] != '-') {
		while (str[i] >= '0' && str[i] <= '9' && str[i]) {
			result = result * 10 + (str[i] - 48);
			i++;
		}
		return (result);
	}
}
