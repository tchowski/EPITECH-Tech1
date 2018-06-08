/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** strdup
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int my_strlen(char *str);

char *my_strdup(char const *src)
{
	int i = 0;
	char *ptr = NULL;

	ptr = malloc(sizeof(char) * (my_strlen(src) + 1));
	while( i < src[i] ){
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
