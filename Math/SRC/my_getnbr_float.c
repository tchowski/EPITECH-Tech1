/*
** EPITECH PROJECT, 2017
** my_get_nbr_float.c
** File description:
** get a float number in a string
*/

#include "include.h"

static char *to_point(char *str)
{
	while(*str != '.' && *str != 0)
		str++;
	if(*str == '.') {
		str++;
		return (str);
	}
	return (0);
}

static float get_after_float_point(char *str)
{
	float result = 0;
	float afterpoint = 0;
	int divisor = 10;

	if ((str = to_point(str)) == 0)
		return result;
	for (int i = 0; i < 2 && *str != 0; i++) {
		afterpoint = (*str - '0');
		result += afterpoint / divisor;
		divisor = divisor * 10;
		str++;
	}
	return (result);
}

float my_get_nbr_float(char *str)
{
	float result = 0;
	int neg = 1;

	if ((result = my_getnbr(str)) < 0)
		neg = -1;
	result = result + neg * get_after_float_point(str);
	return (result);
}
