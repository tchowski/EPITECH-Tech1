/*
** EPITECH PROJECT, 2017
** my_evil_str.c
** File description:
** my_evil_str
*/

char *my_evil_str(char *str)
{
	int j = 0;
	int i = 0;
	char tamp_i;
	char tamp_j;

	while (str[j] != '\0')
		j++;
	j = j - 1;
	while (i <= j) {
		tamp_i = str[i];
		tamp_j = str[j];
		str[i] = tamp_j;
		str[j] = tamp_i;
		i++;
		j--;
	}
	return (str);
}
