/*
** EPITECH PROJECT, 2018
** get_pid_player_1.c
** File description:
** get_pid_player_2
*/

#include "my.h"
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>

int	get_pid_player_2(int pid_p1)
{
	g_g.PID.pid_player_1 = pid_p1;
	my_putstr("my_pid: ");
	g_g.PID.pid_player_2 = getpid();
	my_put_nbr(g_g.PID.pid_player_2);
	SAUT;
	my_putstr("successfully connected\n");
	kill(g_g.PID.pid_player_1, SIGUSR1);
	SAUT;
	game_server();
	SAUT;

	return(g_g.PID.pid_player_2);
}
