/*
** EPITECH PROJECT, 2018
** files.c
** File description:
** files
*/

#include "my.h"
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char	**file_recu(void)
{
	DIR *dir;
	struct dirent *ad;
	char **path_tetris = malloc(sizeof(char*) * 200);
	int i = 0;
	int k = 0;

	dir = opendir("./tetriminos");
	if (dir == NULL) {
		my_putstr("Error no files found\n");
		exit(84);
	}
	while ((ad = readdir(dir)) != NULL) {
		if (*ad->d_name != '.') {
			path_tetris[i] = ad->d_name;
			i++;
			k++;
		}
	}
	i = 0;
	path_tetris = sort(path_tetris, k);
	while (k != 0) {
		config_tetris(path_tetris[i]);
		i++;
		k--;
	}
	return(path_tetris);
}

char	**sort(char **path_tetris, int k)
{
	int j = 1;
	int i = 0;

	while (TRUE) {
		if (my_sort(path_tetris[i], path_tetris[i+1]) > 0) {
			swap((void*) &path_tetris[i], (void*) &path_tetris[i+1]);
			j = FALSE;
		}
		i++;
		if (i >= k - 1) {
			i = 0;
			if (j == TRUE)
				return (path_tetris);
			else
				j = TRUE;
		}
	}
}

char	**open_dir(void)
{
	DIR *dir;
	struct dirent *ad;
	char **path_tetris = malloc(sizeof(char*) * 200);
	int i = 0;

	dir = opendir("./tetriminos");
	if (dir == NULL) {
		my_putstr("Error no files found\n");
		exit(84);
	}
	while ((ad = readdir(dir)) != NULL) {
		if (*ad->d_name != '.') {
			path_tetris[i] = ad->d_name;
			i++;
		}
	}
	return (path_tetris);
}

int	cp_tetris(char **path_tetris)
{
	int j = 0;
	int i = 0;

	while (path_tetris[j] != 0) {
		if (my_strstr(path_tetris[j], ".tetrimino") != NULL)
			i++;
		j++;
	}
	return(i);
}

void	config_tetris(char *path)
{
	char *buffer = malloc(sizeof(char) * 100);
	int fd;
	int read_fd;
	int i = 5;
	char path_link[] = "./tetriminos/./";

	my_strcat(path_link, path);
	fd = open(path_link, O_RDONLY);
	read_fd = read(fd, buffer, 30);
	if (buffer[0] < '1' || buffer[0] > '9') {
		my_putstr("Tetriminos : ");
		my_putstr("Name ");
		aff_name(path);
		my_putstr(" : Error");
		SAUT;
	}
	else {
		my_putstr("Tetriminos : ");
		my_putstr("Name ");
		aff_name(path);
		my_putstr(" : Size ");
		my_putchar(buffer[0]);
		my_putchar('*');
		my_putchar(buffer[2]);
		my_putstr(" : Color ");
		my_putchar(buffer[4]);
		my_putstr(" :\n");
		aff_tetris(buffer);
	}
}
