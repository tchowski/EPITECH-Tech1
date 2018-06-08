/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

int	error(char *str);
int	my_putstr(char *str);
void	display(int argc, char **argv, char **envp);
void	my_putchar(char c);
int	my_put_nbr(int nb);
void	open_dir(char **argv, char **envp);
char 	**get_pars(char *str, int n);
int	my_strlen(char *str);
char	my_strncpy(char *dest, char *src, int n);
char	**my_str_to_wordtab(char *str, char d);
char	*cut_str(char *str);
void	gnl(void);
int	my_strcmp(char const *s1, char const *s2);
