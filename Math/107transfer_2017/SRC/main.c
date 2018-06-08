/*
** EPITECH PROJECT, 2018
** 107 transfer
** File description:
** main
*/

#include "../include/allh.h"

int main(int argc, char **argv)
{
	int c;
	if (argc < 3) {
		printf("Erreur avec les arguments\n");
		return (84);
	}
	else {
		c = checkarg(argc, argv);
		if ( c == -1)
			return (84);
		else {
			avancex(argc, argv);
			return(0);
		}
	}
}
