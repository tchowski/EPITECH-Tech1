/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** strncat
*/

int my_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return (i);
}

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


int main()
{
	char src[] = "weshhh";
	char *dest = malloc (1000);

	my_strncat(dest, src, 4)
		return (0);
}
