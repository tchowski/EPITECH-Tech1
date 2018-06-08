/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** strstr
*/

char *my_strstr(char const *str, char const *to_find)
{
	int j;
	int i;

	i = 0;
	while (str[i] != '\0'){
		j = 0;
		while (to_find[j] == str[i + j]){
			if (to_find[j + i] == '\0'){
				return (char *)(str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
