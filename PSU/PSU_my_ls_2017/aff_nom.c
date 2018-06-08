/*
** EPITECH PROJECT, 2017
** aff_nom.c
** File description:
** aff_nom
*/

#include <sys/types.h>
#include <dirent.h>
#include "include/my_ls.h"
#include <stdlib.h>

void	aff_nom(char *str)
{
	DIR *dir;
	struct dirent *ad;

	dir = opendir(str);
	if (dir == NULL) {
		my_printf("Error no files found\n");
		exit(84);
	}
	while ((ad = readdir(dir)) != NULL) {
		if (ad->d_type == DT_DIR && *ad->d_name != '.')
			my_printf("%s\n", ad->d_name);
		if (*ad->d_name != '.' && ad->d_type != DT_DIR)
		my_printf("%s\n", ad->d_name);
	}
	closedir(dir);
}
