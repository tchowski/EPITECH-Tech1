/*
** EPITECH PROJECT, 2018
** check_args.c
** File description:
** check args for corewar
*/

#include <my.h>
#include <asm.h>

void print_corewar_h(void)
{
	my_putstr("USAGE\n\t");
	my_putstr("./corewar [-dump nbr_cycle] [[-n prog_number] [-a ");
	my_putstr("load_address ] prog_name] ...\n\n");
	my_putstr("DESCRIPTION\n\t");
	my_putstr("-dump nbr_cycle\tdumps the memory after the nbr_cycle ");
	my_putstr("execution (if the round isn't already over) with the ");
	my_putstr("following format: ");
	my_putstr("32 bytes/line in hexadecimal (AOBCDEFE1DD3...)\n\t");
	my_putstr("-n prog_number\tsets the next program's number. ");
	my_putstr("By default, the first free number ");
	my_putstr("in the parameter order\n\t");
	my_putstr("-a load_address\tsets the next program's loading address.");
	my_putstr(" When no address is specified, ");
	my_putstr("optimize the address so that the ");
	my_putstr("processes are as far away from each other as possible. ");
	my_putstr("The adresses are MEM_SIZE modulo\n");
}

int check_args(int ac, char **av)
{
	if (ac < 2)
		return (-1);
	else if (my_strncmp("-h", av[1],  2) == 0) {
		print_corewar_h();
		return (1);
	}
	return (0);
}
