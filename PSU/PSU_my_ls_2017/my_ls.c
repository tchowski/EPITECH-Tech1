/*
** EPITECH PROJECT, 2017
** my_ls.c
** File description:
** my_ls
*/

#include "include/my_ls.h"
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>

int main (int argc, char *argv[])
{
	if (argc == 1) {
		aff_nom(".");
		return(0);
	}
	if (argv[1][0] != '-')
		aff_nom(argv[1]);
	for(int i = 0; argv[i]; i++) {
		if(argv[i][0] == '-') {
			for(int j = 0; argv[i][j]; j++) {
				switch (argv[i][j]) {
					case 'd' :
						if (argv[2] == NULL)
							my_printf("%c\n", '.');
						else
							aff_only_one(argv[2]);
						break;
					case 'a' :
						if (argv[2] == NULL)
							all_files_hidden(".");
						else
							all_files_hidden(argv[2]);
						break;
					case 'l' :
						if (argv[2] == NULL)
							print_long(".");
						else
							print_long(argv[2]);
						break;
					case 'R' :
						if (argv[2] == NULL)
							files_recu(".");
						else
							files_recu(argv[2]);
						break;
				}
			}
		}
	}
	return (0);
}
