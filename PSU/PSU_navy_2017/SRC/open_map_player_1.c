/*
** EPITECH PROJECT, 2018
** file.c
** File description:
** file
*/

#include "my.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

char	**get_map_player_1(int x_1, int y_1, int x_2, int y_2, int boat)
{
	if (x_1 == x_2)
		if (y_1 <= y_2)
			while (y_1 <= y_2) {
				g_g.yes.map_1[y_1][x_1] = boat + '0';
				y_1++;
			}
		else
			while (y_1 >= y_2) {
				g_g.yes.map_1[y_1][x_1] = boat + '0';
				y_1--;
			}
	else
		if(x_1 <= x_2)
			while (x_1 <= x_2) {
				g_g.yes.map_1[y_1][x_1] = boat + '0';
				x_1++;
			}
		else
			while (x_1 >= x_2) {
				g_g.yes.map_1[y_1][x_1--] = boat + '0';
				x_1--;
			}
	return(g_g.yes.map_1);
}

void	get_point(char **map)
{
	int i = 0;
	int k = 0;

	while (i < 8) {
		k = 0;
		while (k < 8) {
			map[i][k] = '.';
			k++;
		}i++;
	}
}

void	print_map_point(void)
{
	int i = 0;
	int k;
	g_g.yes.map_point_p1 = my_malloc(9, 9);

	while (i < 8) {
		k = 0;
		while (k < 8) {
			g_g.yes.map_point_p1[i][k] = '.';
			k++;
		}i++;
	}
}

void	print_map(char **map)
{
	int i = 0;
	int k;

	my_putstr(" |A B C D E F G H\n");
	my_putstr("-+---------------\n");
	while (i < 8) {
		my_put_nbr(i + 1);
		my_putchar('|');
		k = 0;
		while (k < 8) {
			my_putchar(map[i][k]);
			my_putchar(' ');
			k++;
		}i++;
		SAUT;
	}
}

void	open_map_player_1(char *file)
{
	int fd;
	int read_map;
	char *buffer = malloc(sizeof(char) * 64);
	int i = 0;
	int x_1 = 0;
	int y_1 = 0;
	int x_2 = 0;
	int y_2 = 0;
	char **my_map;
	g_g.yes.map_1 = my_malloc(9,9);

	error_pathfile(read_map, fd, file);
	fd = open(file, O_RDONLY);
	read_map = read(fd, buffer, 64);
	error_pathfile(read_map, fd, file);
	while (buffer[i] != 0)
		i++;
	i = 1;
	int boat = 2;

	my_map = str_to_point(buffer);
	cut(my_map);
	get_point(g_g.yes.map_1);
	print_map_point();
	print_map_point_p2();
	while(boat < 6) {
		x_1 = my_map[i][0] - 'A';
		y_1 = my_map[i][1] - '1';
		x_2 = my_map[i][2] - 'A';
		y_2 = my_map[i][3] - '1';
		get_map_player_1(x_1, y_1, x_2, y_2, boat);
		i += 2;
		boat++;
	}
	close(fd);
}
