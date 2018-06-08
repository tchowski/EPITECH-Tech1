/*
** EPITECH PROJECT, 2017
** map.c
** File description:
** map
*/

#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

const char *my_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
	return (str);
}


char *map(void)
{
	char *str;


	   str = ("####################\n"
		  "#                  #\n"
		  "#                  #\n"
		  "# PXO          #####\n"
		  "# OX               #\n"
		  "####################\n");
	   my_putstr(str);
	return(str);
}
