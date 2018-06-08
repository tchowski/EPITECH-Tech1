/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my
*/

#ifndef MY_H
#define MY_H
#define SAUT my_putchar('\n');
#define TRUE 1
#define FALSE 0

typedef struct tetris_t tetris_t;

struct tetris_t {
	char *size;
	char *level;
	char *next;
	char *keyp;
	char *keyq;
	char *keyd;
	char *keyt;
	char *keyr;
	char *keyl;
};

int	path_check(char **argv, struct tetris_t *t);
void	print_usage(char *argv);
int	my_strcmp(char *, char *);
void	my_putchar(char c);
int	my_putstr(char *str);
void	print_usage_debug(struct tetris_t *t);
void	put_str_struct(struct tetris_t *t);
char 	**file_recu(void);
int	cp_tetris(char **path_tetris);
char	*my_strstr(char const *, char const*);
void	print_other(void);
void	display_path(char **);
void	config_tetris(char *path);
char	*my_strcat(char *dest, char const *src);
int	my_strlen(char *str);
void	aff_name(char *path);
void	aff_tetris(char *buffer);
char	**sort(char **path_tetris, int k);
void	swap(void **a, void **b);
int	path_nb(char **);
int	my_sort(char *, char *);
char	**open_dir(void);

#endif
