/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** zicdo
*/

#include <stdlib.h>
#include "../../include/my.h"

char *my_strdup(char const *str)
{
	int i;
	char *dup;
	i = my_strlen(str) + 1;
	dup = malloc(i);
	if(dup == 0)
		return (0);
	dup = my_strcpy(dup, str);
	dup[i - 1] = '\0';
	return (dup);
}
