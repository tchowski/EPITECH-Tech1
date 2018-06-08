/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <unistd.h>
#include "my.h"
#include <stdio.h>

int my_strchar(char str, int nb1, int nb2)
{
	switch (str) {
		case '%' :
			if (nb2 == 0) {
				write (2, "Stop: modulo by zero", 21);
				return (84);
			}
			return my_put_nbr(nb1 % nb2);
		case '+' : 
			return my_put_nbr((nb1 + nb2));
		case '-' : 
			return my_put_nbr((nb1 - nb2));
		case '*' :
			return my_put_nbr((nb1 * nb2));
		case '/' :
			if (nb1 == 0 || nb2 == 0) {
				write (2, "Stop: division by zero", 22);
				return (84);
			}
	}
}

int main(int ac, char *av[])
{
	if (av[2][0] != '+' 
	&& av[2][0] != '*' 
	&& av[2][0] != '/' 
	&& av[2][0] != '%' 
	&& av[2][0] != '-') {
		my_put_nbr(0);
		return(0);
	}
	if (ac < 3) {
		write (2, "Invalid params !\n", 17);
		return (84);
	}
	my_strchar(av[2][0], number(av[1]), number(av[3]));

	return (0);
}
