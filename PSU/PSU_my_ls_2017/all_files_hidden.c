/*
** EPITECH PROJECT, 2017
** all_files_hidden.c
** File description:
** all_files_hidden
*/

#include <sys/types.h>
#include <dirent.h>
#include "include/my_ls.h"
#include <stdlib.h>

void	all_files_hidden(char *str)
{
	DIR *dir;
	struct dirent *ad;

	dir = opendir(str);
	if (dir == NULL) {
		my_printf("Error no files found\n");
		exit(84);
	}
	while ((ad=readdir(dir)) != NULL) {
		if (ad->d_type == DT_DIR)
			my_printf("%s\n", ad->d_name);
		else
			my_printf("%s\n", (ad->d_name));
	}
	closedir(dir);
}
