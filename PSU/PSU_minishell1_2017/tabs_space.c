/*
** EPITECH PROJECT, 2018
** tabs_space.c
** File description:
** tabs_space
*/

#include <stdio.h>
#include "my.h"

char	*spaces(char *str)
{
	int i = 1;
	int k = 1;

	while (str[i]) {
		if (i == 1 && str[i - 1] == ' ')
			k = 0;
		if (str[i - 1] == ' ' && str[i] == ' ')
			i++;
		else {
			str[k] = str[i];
			i++;
			k++;
		}
	}
	if (str[k - 1] == ' ')
		k--;
	str[k] = '\0';
	return (str);
}

char	*tabs(char *str)
{
	int i = 1;
	int k = 1;

	while (str[i]) {
		if (i == 1 && str[i - 1] == '\t')
			k = 0;
		if (str[i - 1] == '\t' && str[i] == '\t')
			i++;
		else {
			str[k] = str[i];
			i++;
			k++;
		}
	}
	if (str[k - 1] == '\t')
		k--;
	str[k] = 0;
	return (str);
}
