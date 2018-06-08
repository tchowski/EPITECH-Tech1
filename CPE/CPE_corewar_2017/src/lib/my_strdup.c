/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** Allocates memory and copies the string from argument.
*/

#include <my.h>
#include <stdlib.h>

char	*my_strdup(char const *src)
{
	char *str;
	int len;

	len = my_strlen(src);
	if ((str = malloc(len + 1)) == 0)
		return (0);
	str = my_strcpy(str, src);
	return (str);
}
