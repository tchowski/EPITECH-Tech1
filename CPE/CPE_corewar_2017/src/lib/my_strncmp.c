/*
** EPITECH PROJECT, 2018
** my_strncmp.c
** File description:
** Default
*/

int my_strncmp(char *str1, char *str2, int num)
{
	int	i;

	for (i = 0; str1[i] == str2[i] && str1[i] && str2[i] && i < num; ++i);
	if ((str1[i] == '\0' && str2[i] == '\0') || i == num)
		return (0);
	else if (str1[i] > str2[i])
		return (1);
	else
		return (-1);
}
