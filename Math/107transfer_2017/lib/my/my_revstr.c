/*
** EPITECH PROJECT, 2017
** CPOOL DAYS
** File description:
** revstr
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
	int a = 0;
	int z = my_strlen(str) - 1;
	char rev;
	while (a < z) {
		rev = str[a];
		str[a] = str[z];
		str[z] = rev;
		a++;
		z--;
	}
	return (str);
}
