/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** my_printf
*/

#include <unistd.h>
#include <stdarg.h>
#include "my_printf.h"

int my_printf(const char *str, ...)
{
	va_list arg;
	va_start(arg, str);
	for(int i = 0; str[i]; i++) {
		if(str[i] == '%') {
			switch (str[i + 1] ) {
				case 'p' :
					my_ptr_print(va_arg(arg, unsigned int));
					break;
				case 'u' :
					my_put_nbr_base_unsigned(va_arg(arg, unsigned int));
					break;
				case 'o' :
					my_put_nbr_base_oct(va_arg(arg, unsigned int));
					break;
				case 'x' :
				case 'X' :
					my_put_nbr_base_hex(va_arg(arg, unsigned int));
					break;

				case 'c' :
					my_putcharchar(va_arg(arg, int));
					break;
				case 's' :
					my_putstr(va_arg(arg, char *));
					break;
				case 'i' :
				case 'd' :
					my_put_nbr(va_arg(arg, int));
					break;
				case 'b' :
					my_put_nbr_base_bi(va_arg(arg, unsigned int));
					break;
				case 'S' :
					my_strlen_oct(va_arg(arg, char *));
					break;
				case '%' :
					my_putchar('%');
					break;
			}
			i++;
		}
		else
			my_putchar(str[i]);
	}
	va_end(arg);
	return (0);
}
