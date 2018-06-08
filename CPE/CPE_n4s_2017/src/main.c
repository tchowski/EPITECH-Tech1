/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "n4s.h"

char    *float_to_str(float nbr)
{
	char *buff = malloc(sizeof (char) * 7);

	gcvt(nbr, 2, buff);
	buff = strcat(buff, "\n");
	return (buff);
}

int     simulation_loop()
{
	char *str = NULL;
	char **info = NULL;

	while (stop_wall(info) != -1) {
		my_putstr(GET_INFO);
		str = gnl(0);
		info = str_to_array(str);
		my_putstr(MOVEON);
		my_putstr(float_to_str(0.9));
		my_putstr("WHEELS_DIR:0.0\n");
	}
	return (0);
}

int     main()
{
	my_putstr(START);
	simulation_loop();
	return (0);
}
