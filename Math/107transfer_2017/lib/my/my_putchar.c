/*
** EPITECH PROJECT, 2017
** CPOOL DAYS
** File description:
** putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}
