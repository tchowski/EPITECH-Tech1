/*
** EPITECH PROJECT, 2018
** solver.h
** File description:
** solver
*/

#ifndef SOLVER_H_
#define SOLVER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct position_t{
	int i;
	int j;
} pos_t;

char *get_map(char *av);
void display_path(char **str);
int specific_strlen(char *str);
int get_nbline_maze(char *maze);
char **str_to_strstr(char *str);
char **on_your_way(char **maze);
void down(char **maze, int i, int j);
void right(char **maze, int i, int j);
void left(char **maze, int i, int j);
void my_free_db_str(char **str);
void move_down(char **maze, pos_t *pos);
pos_t *init_pos(void);

#endif
