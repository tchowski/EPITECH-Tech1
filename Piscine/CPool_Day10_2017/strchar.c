/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <unistd.h>
#include "my.h"
#include <stdio.h>

int my_strchar(char str)
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
