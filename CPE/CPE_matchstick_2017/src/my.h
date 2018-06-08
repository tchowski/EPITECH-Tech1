/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my
*/

#define READ_SIZE (1)

char	*gnl(int fd);
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
int	builtin_exit(char **);
int	builtin_pwd(char **);
int	builtin_cd(char **);
void	builtin_env(char **env);
void	display_path(char **str, int);
void	add_slash(char *s1, char *s2, char *buff);
char	*get_path(char **path, char **cmd);
void	print_game_board(void);
int	my_atoi(char *str);
void	print_map_x(int x);
char	*print_map_side(int x);
int	print_map(int, int);
void	display_str_1(char *str);
int	player_turn(char **, int, int);
int	count_lines(char **str);
int	count_matches_ai(char **str, int);
void	print_map_x_bot(int x);
void	erase_matches(char **map, int i, int nb_matches_max);
void	my_show_wordtab(char **, char);
int	play(char **str, int, int, int);
int	define_line(int map);
int	my_put_nbr(int);
int	ai_turn(char **map, int nb_matches_max, int nb_line);
int	ai_gene_lines(char **);
int	ai_gene_matches(char **, int);
int	check_win_player(char **map);
int	check_win_AI(char **map);
void	error(char *);
void	check_matches(char*, int nb_line, int nb_matches_max, char **);
int	check_empty(char **, int);
int	count_matches(char *);
void	display_ai_turn(int t, int n);
int	parser_check(char **map);
void	player_display(int t, int n);
int	player(char **, int, int);
int	tavu();
int	check_line(char *, int);
int	check_m(char **, char *, char *, int, int);
char	**removing_matches(char **map, int n, int b);
void	display_path_without(char **str, int);
