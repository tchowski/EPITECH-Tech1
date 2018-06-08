/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

/* includes */

#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>

/* structure */

typedef struct for_bsq {
	int lines;
	int cols;
	int **tab;
} bsq;

typedef struct for_variable {
	int x;
	int y;
	int value;
} var;

typedef struct mapping {
	char **tab_char;
} map_i;

typedef struct pathing {
	int upper;
	int on_left;
	int u_l;
} pa_s;

/* Prototypes */

int	my_strlen(char *map);
int	my_putstr(char *str);
void	my_putchar(char c);
char	*open_map(char *av);
int	count_lines(char *map);
int	count_cols(char *map);
int	my_tab(char *map, bsq *bsq_t);
int	**my_malloc_double_tab(int lines, int cols);
int	calc(bsq *bsq_t, pa_s *pa_t);
void	calc_bsq(bsq *bsq_t, var *var_t);
char	**my_malloc_double_char(int lines, int cols);
void	into_tab(bsq *bsq_t, map_i *map_t);
char	**put_x(map_i *map_t, var *var_t);
void	display_path(map_i *map_t, bsq *bsq_t, var *var_t);
