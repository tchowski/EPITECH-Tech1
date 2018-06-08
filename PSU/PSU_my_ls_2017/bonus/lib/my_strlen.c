/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
	int size_str;

	if (!str)
		return (-1);
	size_str = 0;
	while (str[size_str++]);
	return (size_str - 1);
}
