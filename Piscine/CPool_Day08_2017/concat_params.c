/*
** EPITECH PROJECT, 2017
** concat_params.c
** File description:
** concatparams
*/
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_putstr(char *str)
{
	int i = 0;

	while(str[i] != '\0'){
		my_putchar(str[i]);
		i++;
	}
	return (0);
}

int my_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0'){
		i++;
	}
	return(i);
}

int count(int argc, char **argv)
{
	int x =0;
	int y = 0;
	int tmp;
	int i = 0;

	while (x < argc){
		y++;
		if (argv[x][y] == '\0'){
			x++;
			tmp = tmp + y;
				y = 0;
			}
		}
	return (tmp);
}

char *concat_params(int argc, char **argv)
{
	int k = 0;
	int x = 0;
	int y = 0;
	int j = count(argc, argv);
	char *str;

	str = malloc(sizeof(char) * (j + 1));
	while (x < argc){
		str[k] = argv[x][y];
		y++;
		k++;
			if (argv[x][y] == '\0'){
				str[k] = '\n';
				x++;
				k++;
				y = 0;
			}
		}
	str[k - 1]= '\0';
	return(str);
}
