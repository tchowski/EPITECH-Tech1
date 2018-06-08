/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"
#include <curses.h>

int	path_check(char **argv, struct tetris_t *t)
{
	if (my_strcmp(argv[1], "--help") == 0) {
		print_usage(argv[0]);
		return(0);
	}
	if (my_strcmp(argv[1], "-D") == 0) {
		put_str_struct(t);
		print_usage_debug(t);
		return(0);
	}
}

int main(int argc, char **argv)
{
	struct tetris_t t;

	if (argc > 1)
		return (path_check(argv, &t));
	if (argc == 1) {
		my_putstr("You should put atleast 2 arguments\n");
		return(84);
	}
}
