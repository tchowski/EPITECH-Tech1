/*
** EPITECH PROJECT, 2017
** printf
** File description:
** affichage arg
*/

#include <stdarg.h>
#include "../../include/my.h"
#include "../../include/printf.h"

int affichage(va_list printfx, char *str, int i)
{
	if (str[i] == 100 || str[i] == 105)
		my_put_nbr(va_arg(printfx, int));
	if (str[i] == 115 || str[i] == 99)
		my_putstr(va_arg(printfx, char *));
	if (str[i] == '%')
		my_putchar('%');
	return (i);
}
