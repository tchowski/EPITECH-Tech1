/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** the main function of the asm binary
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "asm.h"
#include "my.h"
#include "op.h"

const unsigned char	name_header[4] = {0x0, 0xea, 0x83, 0xf3};
const unsigned char	NAMESTEP = 7;
const unsigned char	COMMENTSTEP = 10;
const unsigned char	N = 1;
const unsigned char	C = 2;

static char	*truncate_info(cor_t *fileinfo, const unsigned char opt)
{
	unsigned char	errorlevel = 1;
	char		*str;

	while ((str = my_gnl(fileinfo->s_fd)) != NULL) {
		if (my_strncmp((opt == N ? N_CMD_STR : C_CMD_STR),
			       str, (opt == N ? 4 : 8)) == 0) {
			errorlevel = 0;
			break;
		}
	}
	str += (opt == N ? NAMESTEP : COMMENTSTEP);
	if (errorlevel == 1) {
		if (opt == N)
			my_putstr("ERROR: .name entry not found in file\n");
		else
			my_putstr("ERROR: .comment entry not found in file\n");
		close(fileinfo->s_fd);
		close(fileinfo->cor_fd);
		exit(84);
	}
	return (str);
}

static void	generate_name(cor_t *fileinfo)
{
	char	*str;

	str = truncate_info(fileinfo, N);
	write(fileinfo->cor_fd, name_header, 4);
	for (int i = 0; str[i] != 34; ++i) {
		if (i >= PROG_NAME_LENGTH) {
			my_putstr("ERROR: .name max size is 127 characters!\n");
			exit (84);
		}
		write(fileinfo->cor_fd, &str[i], 1);
	}
}

static void	generate_comment(cor_t *fileinfo)
{
	char	*str;

	str = truncate_info(fileinfo, C);
	lseek(fileinfo->cor_fd, 0x80, SEEK_SET);
	for (int i = 0; i < 10; ++i)
		write(fileinfo->cor_fd, &name_header[0], 1);
	for (int i = 0; str[i] != 34; ++i) {
		if (i >= COMMENT_LENGTH) {
			my_putstr("ERROR: .comment max size is 2048 chars!\n");
			exit (84);
		}
		write(fileinfo->cor_fd, &str[i], 1);
	}
}

void	generate_header(cor_t *fileinfo)
{
	fileinfo->s_fd = open(fileinfo->sfile, O_RDONLY);
	fileinfo->cor_fd = open(fileinfo->filename, O_RDWR);
	generate_name(fileinfo);
	generate_comment(fileinfo);
}
