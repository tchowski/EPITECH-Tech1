/*
** EPITECH PROJECT, 2018
** epit	
** File description:
** trs
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_strlen(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++);
	return (i);
}

char *re_alloc(char *str)
{
	char *str2 = malloc((my_strlen(str) + 2));
	int i = 0;

	for ( ; str[i] != '\0' ; i++)
		str2[i] = str[i];
	str2[i + 1] = '\0';
	free(str);
	return (str2);
}

char *gnl(int fd)
{
	int i = 0;
	int size = 0;
	char buf[1];
	char *str;

	str = malloc(sizeof(char) * 1);
	str[0] = '\0';
	for ( ; (size = read(fd, buf, 1)) > 0 && buf[0] != '\n'; i++) {
		str = re_alloc(str);
		str[i] = buf[0];
	}
	if (size == 0 && i == 0)
		return (NULL);
	else
		return (str);
}
