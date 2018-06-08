/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my
*/

#include <unistd.h>
#include <signal.h>
#define SAUT my_putchar('\n');

typedef struct b {
	int pid_player_1;
	int pid_player_2;
} oui;

typedef struct c {
	char **map_1;
	char **map_2;
	char **map_point_p1;
	char **map_point_p2;
} t_player;

struct d {
	t_player yes;
	oui PID;
} g_g;

int	error(char *str);
int	my_putstr(char *str);
void	display(int argc, char **argv, char **envp);
void	my_putchar(char c);
char	*my_strncpy(char *dest, char *src, int n);
void	gnl(void);
int	my_strcmp(char const *s1, char const *s2);
char	**str_to_point(char *str);
char	**str_to_space(char *str);
int	my_strncmp(char const *s1, char const *s2, int n);
int	execute_prog(char **cmd, char **, char **);
char	**path_env(char **);
char	*my_strcat(char *dest, char const *src);
int	builtin_exit(char **);
int	builtin_pwd(char **);
int	builtin_cd(char **);
void	builtin_env(char **env);
void	display_path(char **str);
void	add_slash(char *s1, char *s2, char *buff);
char	*get_path(char **path, char **cmd);
void	print_game_board(void);
int	my_atoi(char *str);
void	print_map_x(int x);
char	*print_map_side(int x);
void	display_str_1(char *str);
int	player_turn(char **, int, int);
int	count_lines(char **str);
int	count_matches_ai(char **str, int);
void	print_map_x_bot(int x);
void	erase_matches(char **map, int i, int nb_matches_max);
int 	check_standard(char *str);
void	my_show_wordtab(char **, char);
int	erase_m(char **str, int, int, int);
int	define_line(int map);
int	my_put_nbr(int);
int	ai_turn(char **map, int nb_matches_max, int nb_line);
int	ai_gene_lines(char **);
int	ai_gene_matches(char **, int);
int	check_win_player(char **map);
int	check_win_AI(char **map);
void	display_str_2(char *);
void	check_matches(char*, int nb_line, int nb_matches_max, char **);
int	check_empty(char **, int);
int	count_matches(char *);
void	open_map_player_1(char *map);
void	open_map_player_2(char *map);
void	get_pid_player_1(void);
int	get_pid_player_2(int);
int	parse_map(char *);
void	display_map(char **);
int	error_pathfile(int read_map, int fd, char *map);
void	cut(char **map);
void	print_map(char **);
void	get_point(char **map);
char	**my_malloc(int lines, int cols);
void	print_usage(void);
void	print_map_point();
void	print_map_point_p2();
int	my_strlen(char *);
int	check_map(char *fd);
void	play_client(void);
void	play_server(int);
void	hit_or_not(char *buffer);

typedef struct a {
	int x_1;
	int x_2;
	int y_1;
	int y_2;
}zz;

void	game_client(int);
void	game_server(void);
char	**get_map_player_1(int, int, int, int, int);
char	**get_map_player_2(int, int, int, int, int);
static void	handler_signal(int sig, siginfo_t *info, void *context);
void	send_signal(int sig);
void	hanler(int n);
