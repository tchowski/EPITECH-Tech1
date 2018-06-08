/*
** EPITECH PROJECT, 2017
** rush 2
** File description:
** error managment for rush 2
*/

#include <unistd.h>

void my_put_error(void)
{
	int i = 0;
	char *str = "invalid size\n";

	while (str[i] != '\0') {
		write(2, &str[i], 1);
		i++;
	}
}

int error_check(int x, int y)
{
	if (x == 0 || y == 0) {
		my_put_error();
		return (1);
	}
	if (x < 0 || y < 0) {
		my_put_error();
		return (1);
	}
	return (0);
}
