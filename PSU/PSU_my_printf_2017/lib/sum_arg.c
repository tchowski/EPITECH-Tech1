/*
** EPITECH PROJECT, 2017
** sum_arg.c
** File description:
** arg
*/

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>

int my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

int sum_arg(int nb, ...)

{
	va_list arg;
	int result = 0;

	va_start(arg, nb);
	while(nb) {
		result = result + my_strlen(va_arg(arg, char *));
		nb--;
	}
	va_end(arg);
	return (result);
}
