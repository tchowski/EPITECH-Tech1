/*
** EPITECH PROJECT, 2017
** files_recu.c
** File description:
** file_recu
*/

#include <sys/types.h>
#include "include/my_ls.h"
#include <dirent.h>
#include <stdlib.h>

void files_recu(char *str)
{
	DIR *dir;
	struct dirent *ad;

	dir = opendir(str);
	if (dir == NULL) {
		my_printf("Error no files found\n");
		exit(84);
	}
	my_printf("%s: \n", str);
	aff_nom(str);
	while((ad = readdir(dir)) != NULL) {
		if (*ad->d_name != '.') {
			if (ad->d_type == DT_DIR) {
				my_printf("\n");
				my_printf("./%s: \n", ad->d_name);
				aff_nom(ad->d_name);
			}
		}
	}
	closedir(dir);
}
