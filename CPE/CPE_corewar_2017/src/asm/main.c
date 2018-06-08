/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** the main function of the asm binary
*/

#include "asm.h"

int main(int ac, char **av)
{
	cor_t		fileinfo;

	check(ac, av);
	create_cor_file(av[1], &fileinfo);
	generate_header(&fileinfo);
	opcode_parser(&fileinfo);
	return (0);
}
