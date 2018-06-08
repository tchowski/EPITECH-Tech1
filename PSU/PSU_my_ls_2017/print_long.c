/*
** EPITECH PROJECT, 2017
** print_long.c
** File description:
** print_long
*/

#include <dirent.h>
#include "include/my_ls.h"
#include <stdlib.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>

void print_long(char *str)
{
	DIR *dir;
	struct dirent *ad;
	struct stat sts;
	char *time;
	int i = 0;

	dir = opendir(str);
	while((ad = readdir(dir)) != NULL) {
		if (*ad->d_name != '.') {
		stat(ad->d_name, &sts);
		my_printf(" %d", sts.st_nlink);
		my_printf(" %s", getpwuid(sts.st_uid)->pw_name);
		my_printf(" %s", getgrgid(sts.st_gid)->gr_name);
		my_printf(" %d", sts.st_size);
		time = ctime(&(sts.st_mtime));
		while (time[i])
			i++;
		time[i - 1] = '\0';
		my_printf(" %s", time);
		my_printf(" %s", ad->d_name);
		my_printf("\n");
		}
	}
}
