/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** task02
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
	int i = my_strlen(src);
	int c = my_strlen(dest);
	int d = 0;
	char *array = my_strdup(dest);
	dest = malloc(sizeof(char) * (i + c));
	c = 0;
	while (array[c] != '\0') {
		dest[d] = array[c];
		d++;
		c++;
	}
	c = 0;
	while (src[c] != '\0') {
		dest[d] = src[c];
		d++;
		c++;
	}
	return (dest);
}
