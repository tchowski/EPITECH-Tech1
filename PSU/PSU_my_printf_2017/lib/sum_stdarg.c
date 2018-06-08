/*
** EPITECH PROJECT, 2017
** sum_stdarg.c
** File description:
** sum_stdarg
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int my_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

int sum_stdarg(int i, int nb, ...)
{
	va_list arg;
	int result = 0;

	if (i == 0) {
		va_start(arg, nb);
	while (nb) {
		result = result + va_arg(arg, int);
		nb--;
	}
		va_end(arg);
	return (result);
	}
	if (i == 1) {
		va_start(arg, nb);
	while (nb) {
		result = result + my_strlen(va_arg(arg, char *));
		nb--;
	}
		va_end(arg);
	return (result);
	}
}
