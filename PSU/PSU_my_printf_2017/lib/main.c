/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "my_printf.h"
#include <stdio.h>

int my_printf(const char *str, ...);

int main()
{
	char str[] = "Agathe";

	str[1] = 32;

	char n;

	char *d = &n;

	my_printf("%x, %s, %%, %X, %o, %S, %c, %p", 24500, "tavu", 200, 200, str);
	my_putchar('\n');
	printf("%x, %s, %%, %X, %o, %c, %p,", 24500, "tavu", 200, 200, 'd', d);
//	my_putchar('\n');
	/*my_printf("%p", &n);
	my_putchar('\n');
	my_printf("%u", 123);
	my_putchar('\n');
	my_printf("%o", 123);
	my_putchar('\n');
	my_printf("%X", 200);
	my_putchar('\n');
	my_printf("%c", 'D');
	my_putchar('\n');
	my_printf("%s", "wesh");
	my_putchar('\n');
	my_printf("%i", 123);
	my_putchar('\n');
	my_printf("%b", 123);
	my_putchar('\n');
	my_printf("%S", str);
	my_putchar('\n');
	printf("%p", d);
//	printf("%i", d);
	return (0);
//	my_printf("%s", "Hello");
//	*/
}
