/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int k = 0;

	while (n <= k && src[k] != '\0'){
		dest[k] = src[k];
		k++;
	}
	while (n <= k){
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
