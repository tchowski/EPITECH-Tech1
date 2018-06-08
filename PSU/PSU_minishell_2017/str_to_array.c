/*
** EPITECH PROJECT, 2018
** str_to_array.c
** File description:
** str_to_array
*/

#include "my.h"
#include <stdio.h>

int	count_word(char *str)
{
	int i = 0;

	while (str[i] != ' ')
		i++;
	return(i);
}


char	**str_to_array(char *str)
{
	char **array;
	int i;

	while (str[i] != 0) {

}

int main()
{
	printf("%d", count_word("wesh ta vu"));
	return (0);
}
