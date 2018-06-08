/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "solver.h"

int main(int ac, char **av)
{
	if (ac != 2)
		exit (84);
	char *str = get_map(av[1]);
	char **maze = str_to_strstr(str);

	maze = on_your_way(maze);
	display_path(maze);
	my_free_db_str(maze);
	return (0);
}

pos_t *init_pos(void)
{
	pos_t *pos = malloc(sizeof(*pos));
	if (!pos)
		return (NULL);
	pos->i = 0;
	pos->j = 0;
	return (pos);
}

void my_free_db_str(char **str)
{
	for (int i = 0; str[i]; i++)
		free(str[i]);
}
