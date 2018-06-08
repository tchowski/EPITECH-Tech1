/*
** EPITECH PROJECT, 2018
** dir.c
** File description:
** dir
*/

#include "my.h"
#include <dirent.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>

void	open_dir(char **argv, char **envp)
{
	DIR *dir;
	struct dirent *ad;
	int i;

	//dir = opendir(str);
	//my_putstr(getcwd(tmp, 1000));
	/*if (dir == NULL)
		error("Error no files found\n");
	while ((ad = readdir(dir)) != NULL) {
		if (ad->d_type == DT_DIR)
			my_putstr(ad->d_name);
	}

//	if (getcwd(tmp, _SC_UCHAR_MAX) == NULL)
//		error("NOP");
//	my_putstr(getcwd(tmp, _SC_UCHAR_MAX));
	closedir(dir);*/

	i = execve(cut_str(argv[1]), argv, NULL);
	printf("%d", i);
	if (i == -1)
		perror("Tocard");

}

/*char	**get_pars(char *str)
{
	int i;
	char **word_array = malloc(sizeof(**word_array) * my_strlen(str));

	while (str[i]) {
		my_strncpy(*word_array, str, i);
		if (str[i] == ' ')
			i++;
		i++;
	}
	return (word_array);
}*/
