/*
** EPITECH PROJECT, 2017
** printf
** File description:
** printf
*/

#include "../../include/my.h"
#include "../../include/printf.h"
#include <stdarg.h>
#include <stdlib.h>

int my_printf(char *str, ...)
{
	int i = 0;
	int arg = 0;
	va_list printfc;
	int d;
	va_start(printfc, str);
	while (str[i] != '\0') {
	        if (str[i] == '%'){
			i++;
			affichage(printfc, str, i);
		}
		if (str[i - 1] != '%') {
			my_putchar(str[i]);
		}
		i = i + 1;
	}
	va_end(printfc);
	return (0);
}
