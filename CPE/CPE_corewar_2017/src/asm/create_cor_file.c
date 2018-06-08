/*
** EPITECH PROJECT, 2018
** create_cor_file.c
** File description:
** creates an empty core file named after the .s file
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"
#include "asm.h"

static char	*find_filename(char *path)
{
	unsigned char	last_slash_pos = 0;
	unsigned char	slash_present = 0;

	for (unsigned char i = 0; path[i] != '\0'; ++i) {
		if (path[i] == '/') {
			slash_present = 1;
			last_slash_pos = i;
		}
	}
	return (path + (slash_present == 1 ? last_slash_pos + 1 : 0));
}

static int	point_pos(char *str)
{
	int	i;

	for (i = 0; str[i] != '\0' && str[i] != '.'; ++i);
	return (i);
}

static char	*change_extension(char *filename, char *extension)
{
	int	i = point_pos(filename);

	filename[i] = '\0';

	return (my_strcat(filename, extension));
}

void	create_cor_file(char *path, cor_t *fileinfo)
{
	char	*filepath = my_strdup(path);

	fileinfo->sfile = path;
	fileinfo->filename = change_extension(find_filename(filepath), ".cor");
	if (fopen(fileinfo->filename, "a") == NULL)
		exit(84);
}
