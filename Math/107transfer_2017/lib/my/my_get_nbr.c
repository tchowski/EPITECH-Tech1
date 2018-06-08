/*
** EPITECH PROJECT, 2017
** my_get_nbr.c
** File description:
** get nbr 
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int n = 0;
	int nbr = 0;
	while (str[i] < '0' || str[i] > '9') {
		i++;
	}
	n = i;
	while (str[i] >= '0' && str[i] <= '9') {
		nbr = nbr * 10 + str[i] - 48;
		i++;
	}
	if (str[n - 1] == '-')
		nbr = -nbr;
	return (nbr);
}
