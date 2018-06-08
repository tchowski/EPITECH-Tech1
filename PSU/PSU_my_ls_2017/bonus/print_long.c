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
#include <stdio.h>
#include <sys/stat.h>
#include <time.h>
#include <grp.h>
#include <pwd.h>

void print_long(char *str)
{
	DIR *dir;
	struct dirent *ad;
	struct stat sts;
	struct tm * time;

	dir = opendir(str);
	if (dir == NULL) {
		my_printf("Error no files found\n");
		exit(84);
	}
	while((ad = readdir(dir)) != NULL) {
		if (*ad->d_name != '.') {
		stat(ad->d_name, &sts);
		my_printf(" %d", sts.st_nlink);
		my_printf(" %s", getpwuid(sts.st_uid)->pw_name);
		my_printf(" %s", getgrgid(sts.st_gid)->gr_name);
		my_printf(" %d", (sts.st_size));
		time = localtime(&sts.st_mtime);
		my_printf(" %d-%d-%d %d:%d", time->tm_year + 1900, time->tm_mon + 1, time->tm_mday, time->tm_hour, time->tm_min);
			my_printf(" %s", ad->d_name);
//		my_printf("\n");
		}
	}
	closedir(dir);
}
