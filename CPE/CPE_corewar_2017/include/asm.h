/*
** EPITECH PROJECT, 2018
** asm.h
** File description:
** Default
*/

#ifndef	ASM_H_
#define	ASM_H_

typedef struct cor_s {
	char	*sfile;
	char	*filename;
	int	s_fd;
	int	cor_fd;
} cor_t;

typedef struct parser_s {
	short int	current_line;
	unsigned char	type;
	unsigned char	errorlevel;
} parser_t;

void		check(int ac, char **av);
void		create_cor_file(char *path, cor_t *fileinfo);
void		generate_header(cor_t *fileinfo);
void		opcode_parser(cor_t *fileinfo);

#endif /* !ASM_H_ */
