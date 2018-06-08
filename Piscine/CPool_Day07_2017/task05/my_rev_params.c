/*
** EPITECH PROJECT, 2017
** my_rev_params.c
** File description:
** revparams
*/

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0'){
		my_putchar(str[i]);
		i++;
	}
	return (0);
}

int main (int ac, char *av[])
{
	int i;

	for (i = 1; i <= ac ; i++){
		my_putstr(av[ac - i]);
		my_putchar('\n');
	}
	return (0);
}
