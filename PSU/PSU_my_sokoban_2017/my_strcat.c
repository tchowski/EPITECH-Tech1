/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** my_strcat
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = 0;

	while(dest[j])
		j++;
	while (src[i]) {
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
