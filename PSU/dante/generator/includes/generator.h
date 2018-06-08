/*
** EPITECH PROJECT, 2018
** generator.h
** File description:
** generator
*/

#ifndef GENERATOR_H_
#define GENERATOR_H_

/* Define */

#define ERROR "You should put valid arguments\n"

/* Includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* Chains Lists */

typedef struct dante_struct {
	int width;
	int height;
} dante;

/* Fonctions */

int	parser_check(char **map);
void	imperfect_maze(int map1, int map2);
void	init_perfect_maze(int map_x, int map_y);
void	init_imperfect_maze(int map_x, int map_y);
void	perfect_maze(char **maze, int map_x, int map_y);
void	put_in_file(char **str);
char	**my_malloc(int, int);
void	display_path(char **);
void	my_putchar(char c);
int	my_putstr(char *);
int	check_arg(char *av1, char *av2);
char	**my_malloc_double_char(int, int);

#endif /* _GENERATOR_H_ */
