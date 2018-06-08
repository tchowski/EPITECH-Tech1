/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** Get the number in a string
*/

long give_nb(char const *str, int i)
{
	long nb = 0;

	while (str[i] >= '0' && str[i] <= '9') {
		nb *= 10;
		nb += str[i] - '0';
		i += 1;
	}
	return (nb);
}

long get_nb(char const *str)
{
	int i = 0;
	long nb = 0;

	while (str[i] != '\0') {
		if (str[i] >= '0' && str[i] <= '9') {
			return (give_nb(str, i));
		}
		i += 1;
	}
	return (0);
}

int my_getnbr(char *str)
{
	long test = get_nb(str);
	int ret = test;

	ret = test;
	return (ret);
}
