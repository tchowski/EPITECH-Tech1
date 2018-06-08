/*
** EPITECH PROJECT, 2017
** print_map.c
** File description:
** print_map
*/

#include <dirent.h>
#include <ncurses.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

int screen(char *map)
{
	int c;
	int i;

	while(*map) {
		clear();
		printw(map);
		refresh();
		c = getch();
		if (c == ' ')
			break;
	}
	endwin();
	return(0);
}

char *file_to_array(int ac, char **av)
{
	initscr();
	noecho();
	curs_set(FALSE);
	FILE *fp = fopen(av[1], "r");
	char *buffer = malloc(4000);
	size_t len = 0;
	ssize_t read = 0;
	char *line = NULL;

	if(!fp)
		exit(EXIT_FAILURE);
	while (getline(&line, &len, fp) != -1) {
		my_strcat(buffer, line);
	}
	screen(buffer);
	return (buffer);
}
