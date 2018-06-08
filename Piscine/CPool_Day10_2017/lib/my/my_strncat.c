/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** strncat
*/

int my_strlen(char *str);

char *my_strncat(char *dest, char const *src, int nb)
{
	int i = 0;
	int j = my_strlen(dest);

	while (i < nb && src[i] != '\0'){
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
