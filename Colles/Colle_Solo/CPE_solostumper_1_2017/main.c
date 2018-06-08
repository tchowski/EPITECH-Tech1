/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"

int error_message (void)
{
	my_putstr("Usage:	./hidenp needle haystack");
	my_putchar('\n');
	return (84);
}

int find_this(char *str1, char *str2)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (str1[i] != str2[k]) {
		if (str1[i] == str2[k]) {
			j++;
		}
		i++;
		k++;
	}
		if (i == j) {
			my_putchar('1');
			return (0);
		}
		else {
			my_putchar('0');
			return (0);
		}
}

int main(int ac, char **av)
{
	if (ac != 3) {
		error_message();
		return (84);
	}
	if (ac == 3)
		find_this(av[1], av[2]);
	my_putchar('\n');
	return (0);

}
