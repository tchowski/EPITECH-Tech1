/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** strncmp
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
	int k = 0;

	while (n - 1 > k && s1[k] != '\0' && s2[k] != '\0' && s1[k] == s2[k])
		k++;
	return (s1[k] - s2[k]);
}
