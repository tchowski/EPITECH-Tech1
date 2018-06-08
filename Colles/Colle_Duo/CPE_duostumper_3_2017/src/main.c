/*
** EPITECH PROJECT, 2018
** cesar
** File description:
** basic main with error handling and the cryted string fuction
*/

#include "cesar.h"

static char	*crypte_string(char *str, const int nbr)
{
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = (str[i] - 'a' + nbr);
			if (str[i] < 0)
				str[i] = 26 + str[i];
			str[i] = str[i] % 26 + 'a';
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = (str[i] - 'A' + nbr);
			if (str[i] < 0)
				str[i] = 26 + str[i];
			str[i] = str[i] % 26 + 'A';
		}
	}
	return (str);
}

static bool	error_handling(int ac, char **av)
{
	int	i = 0;

	if (ac != 4)
		return (false);
	if (strcmp(av[1], "-s") != 0 && strcmp(av[1], "-f") != 0)
		return (false);
	if (av[3][0] == '-')
		i++;
	while (av[3][i] != '\0') {
		if (av[3][i] < '0' || av[3][i] > '9')
			return (false);
		i++;
	}
	return (true);
}

int	main(int ac, char **av)
{
	char	*crypted;

	if (error_handling(ac, av) == false) {
		write(2, error, strlen(error));
		return (EXIT_ERROR);
	}
	if (strcmp(av[1], "-f") == 0)
		crypted = open_file(av[2]);
	else
		crypted = av[2];
	crypted = crypte_string(crypted, atoi(av[3]));
	put_int_file(crypted);
	return (EXIT_SUCCESS);
}
