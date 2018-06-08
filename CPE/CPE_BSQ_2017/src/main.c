/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include "my.h"

static void launch(char **argv, bsq bsq_t, var var_t, map_i map_t)
{
	char *map = open_map(argv[1]);
	bsq_t.lines = count_lines(map);
	bsq_t.cols = count_cols(map);
	bsq_t.tab = my_malloc_double_tab(bsq_t.lines, bsq_t.cols);
	map_t.tab_char = my_malloc_double_char(bsq_t.lines, bsq_t.cols);
	pa_s pa_t;

	my_tab(map, &bsq_t);
	calc(&bsq_t, &pa_t);
	calc_bsq(&bsq_t, &var_t);
	into_tab(&bsq_t, &map_t);
	display_path(&map_t, &bsq_t, &var_t);
}

int main(int argc, char **argv)
{
	bsq bsq_t;
	var var_t;
	map_i map_t;

	if (argc > 1) {
		launch(argv, bsq_t, var_t, map_t);
	}
	else {
		write(2, "You need a file as argument\n", 28);
		return (84);
	}
	return (0);
}
