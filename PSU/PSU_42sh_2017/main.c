/*
** EPITECH PROJECT, 2018
** 42sh
** File description:
** system
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	while (system("tsch") == 0);
	return (0);
}
