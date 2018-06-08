/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** my_strcat
*/

int my_strlen(char *str);

char *my_strcat(char *dest, char const *src)
{
	int i = 0;
	int j = my_strlen(dest);

	while (src[i] && dest[i]){
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
