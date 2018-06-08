/*
** EPITECH PROJECT, 2017
** print_h.c
** File description:
** print_h
*/

#include "my.h"

void print_h(void)
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putchar('\n');
	my_putstr("USAGE:\n");
	my_putstr("\t./my_hunter [OPTIONS]\n");
	my_putchar('\n');
	my_putstr("OPTIONS:\n");
	my_putstr("\t-d \t Print the project's description ");
	my_putstr("and quit.\n");
	my_putstr("\t-h \t Print the usage and quit.\n");
	my_putstr("\t./my_hunter \t Start the game.\n");
}

void print_d(void)
{
	my_putstr("animation rendering in a CSFML window.\n");
	my_putchar('\n');
	my_putstr("The aim of this project is to shoot a duck ");
	my_putstr("like the original game \"Duck Hunt\".\n");
	my_putstr("When you shoot him the speed of the duck gonna increase.\n");
	my_putchar('\n');
	my_putstr("TRY HARD AND HAVE FUN !\n");
	my_putchar('\n');
}
