/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my
*/

/* includes */

#include "gnl.h"
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <signal.h>

/* Structure */

typedef struct pipe {
	int fildes[2];
	char **cmd;
	int fd;
} pipe_t;

/* Variable globale */

int	value;

/* Prototypes */
int	execute_prog_pipe(char *, char **, char **, pipe_t *pipe);
int	is_pipe(char *);
int	count_path_double(char **);
char	**setup_envv(char **, char *, char *, int);
void	setup_unsetenv(char **, char *, int i);
int	count_path(char **env);
int	my_putstr(char *str);
void	display(int argc, char **argv, char **envp);
void	my_putchar(char c);
int	my_strlen(char *str);
char	*my_strncpy(char *dest, char *src, int n);
int	my_strcmp(char const *s1, char const *s2);
char	**str_to_array(char *str);
char	**str_to_space(char *str);
int	my_strncmp(char const *s1, char const *s2, int n);
int	execute_prog(char **cmd, char **, char **);
char	**path_env(char **);
char	*my_strcat(char *dest, char const *src);
int	builtin_exit(void);
int	builtin_pwd(void);
int	builtin_cd(char **, char **);
int	builtin_env(char **env);
void	display_path(char **str);
void	add_slash(char *s1, char *s2, char *buff);
char	*get_path(char **path, char **cmd);
void	print_error(int);
int	my_wait_dat(void);
char	**my_malloc(int, int);
void	error(char *str);
char	**setup_env(char **env);
int	count_path(char **env);
char	*my_env_strcat(char **argv);
char	*my_strcpy(char *dest, char *src);
int	config_set(char **argv, char **env);
int	config_set_two(char **argv, char **env);
int	config_set_unsetenv(char **, char **);
char	**my_setenv(char **, char *, char *);
char	**my_setenv_two(char **, char *);
char	**my_unsetenv(char **, char *);
int	check_commands(char **, char **, char **);
char	*tabs(char *str);
char	*spaces(char *str);
char	**path_cd(char **env, char *path, int nb);
int	check_redirection(char **my_env, char **array, char **path);
int	setup_redirection(char **my_env, char **array, char **path);
int	execute_prog_comma(char *array, char **path, char **my_env);
char	*get_path_comma(char **path, char *cmd);
char	**str_to_comma(char *);
char	**str_to_pipe(char *);
char	**update_oldpwd(char **my_env);
char	**update_pwd(char **my_env);
char	**ft_strsplit(char *, char *);
char	*gnl(int);
char	**separe(char *, char);
char	**my_str(char *, char);
void	free_tabs(char **);
int	is_builtin(char *, char **);
int	is_redirection_cat(char *array);
int	exec_redirection_cat(char **array);
char	**str_redi(char *);
int	exec_pipe(char *, char **, char **);
int	is_pipe(char *);
