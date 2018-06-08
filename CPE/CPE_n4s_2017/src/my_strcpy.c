/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** strcpy
*/

#include "n4s.h"
#include <stdlib.h>
#include <stdio.h>

char	*my_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0') {
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
