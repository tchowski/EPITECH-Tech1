/*
** EPITECH PROJECT, 2017
** rush.c
** File description:
** rush
*/

#include <unistd.h>
#include "my.h"

void my_show(char c, int nb, float freq)
{
	my_putchar(c);
	my_putchar(':');
	my_put_nbr(nb);
	my_putchar(' ');
	my_putchar('(');
	my_putfloat(freq);
	my_putchar('%');
	my_putchar(')');
	my_putchar('\n');
}

void my_freq(char c, int nb1, char *str)
{
	int i = 0;
	float nb2 = nb1;
	float count = 0;
	float freq = 0;

	while (str[i]) {
		if ('A' <= str[i] && str[i] <= 'Z' ||
		    'a' <= str[i] && str[i] <= 'z')
			count++;
		i++;
	}
	freq = nb2 * 100 / count;
	my_show(c, nb1, freq);
}

void my_strchar(char *str, char to_find)
{
	int i = 0;
	int count = 0;
	char c = to_find;

	while (str[i]) {
		if (str[i] == to_find)
			count++;
		i++;
	}
	if (to_find < 'a') 
		to_find += 32;
	else
		to_find -= 32;
	i = 0;
	while (str[i]) {
		if (str[i] == to_find)
			count++;
		i++;
	}
	my_freq(c, count, str);
}

int main(int ac, char **av)
{
	int i = 2;

	if (ac < 3) {
		write (2, "Invalid params !\n", 17);
		return (84);
	}
	while (av[i]) {
		if (av[i][0] < 'A' || 'z' < av[i][0] ||
		    'Z' < av[i][0] && av[i][0] < 'a') {
			write (2, "Invalid letter !\n", 17);
			return (84);
		}
		my_strchar(av[1], av[i][0]);
		i++;
	}
	return (0);
}
