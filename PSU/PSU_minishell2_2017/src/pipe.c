/*
** EPITECH PROJECT, 2018
** pipe.c
** File description:
** pipe
*/

#include "my.h"

static void	initialized_father(pipe_t *pipe)
{
	pipe->fildes[0] = dup(0);
	pipe->fildes[1] = dup(1);
}

static void	initialized_son(pipe_t *pipe)
{
	dup2(pipe->fildes[0], 0);
	dup2(pipe->fildes[1], 1);
}

static void	initialized_struct_pipe(char *array, pipe_t *pipe)
{
	pipe->cmd = str_to_pipe(array);
	pipe->fd = 0;
}

int execute_prog_pipe(char *array, char **path, char **my_env, pipe_t *pipe_s)
{
	int i = 0;
	static int pipe_i[2];
	initialized_struct_pipe(array, pipe_s);
	initialized_father(pipe_s);

	for (; pipe_s->cmd[i]; i++) {
		pipe_s->fd = pipe_i[0];
		pipe(pipe_i);
		if (pipe_s->cmd[i + 1] != NULL){
			dup2(pipe_i[1], 1);
			close(pipe_i[1]);
		}
		dup2(pipe_s->fd, 0);
		execute_prog_comma(pipe_s->cmd[i], path, my_env);
		initialized_son(pipe_s);
	}
	return (1);
}
