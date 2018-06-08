/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
//#include "my.h"
/*

int ft_check(char **str)
{
	int i = 0;

	while (str[1][i] >= '0' && str[1][i] <= '9' && str[1][i] != '\0') {
		i++;
	}
}

int summand(char **str)
{
	int result;
	int i = 0;

	while (str[1][i] != '+')




}
*/
int strtol(char *str, char **endptr)
{
	int i = 0;
	int result;
	int j = 1;
	result = 0;
	while (str[i] == '-'){
		while(str[j] >= '0' && str[j] <= '9'){
			result = (result * 10) + ((str[j] - 48));
					j++;
					}
		result = result * -1;
		i++;
				}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + ((str[i]) - 48);
		i++;
	}
	*endptr = str + i;
	return (result);
}

int main()
{
	char *str = "3+5";
	char **endptr;

	printf("%d", strtol(str, endptr));
	printf("%s", endptr);
	return (0);
}
