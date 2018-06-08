/*
** EPITECH PROJECT, 2018
** parser.c
** File description:
** Default
*/

#include <stdio.h>
#include <stdlib.h>
#include "asm.h"
#include "my.h"

const unsigned char	LABEL = 1;
const unsigned char	COMMENT = 2;
const unsigned char	OPCODE = 3;
const unsigned char	BADSYNTAX = 100;

unsigned char	get_type(char *str)
{
	if (str[0] == '#')
		return (COMMENT);
	return (COMMENT);
}

void	file_error(parser_t *info, unsigned char errno)
{
	my_putstr("ERROR: Line ");
	my_put_nbr(info->current_line);
	if (errno == BADSYNTAX)
		my_putstr(", Bad syntax!\n");
	exit (84);
}

void	opcode_parser(cor_t *fileinfo)
{
	int		i;
	char		*str;
	parser_t	info;

	info.errorlevel = 0;
	for (i = 0; (str = my_gnl(fileinfo->s_fd)) != NULL; ++i) {
		info.current_line = i;
		if (str[0] != '#')
			info.type = get_type(str);
		if (str[0] == '!')
			file_error(&info, BADSYNTAX);
	}
}
