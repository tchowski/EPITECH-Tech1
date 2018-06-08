/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** Takes two strings and puts them in one string
*/

int	my_strlen(char *str);

char	*my_strcat(char *dest, char const *src)
{
	int src_len = my_strlen((char *) src);
	int dest_len = my_strlen(dest);
	int cat_len = dest_len + src_len;
	int i = 0;

	while (i < cat_len) {
		dest[dest_len + i] = src[i];
		++i;
	}
	return (dest);
}
