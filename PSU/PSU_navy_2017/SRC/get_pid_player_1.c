/*
** EPITECH PROJECT, 2018
** get_pid_player_1.c
** File description:
** get_pid_player_1
*/

#include "my.h"
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>

void	get_pid_player_1(void)
{
	pid_t pid_p1;

	my_putstr("my_pid: ");
	pid_p1 = getpid();
	my_put_nbr(pid_p1);
	SAUT;
	my_putstr("waiting for enemy connection...\n");
	signal(SIGUSR1, game_client);
	pause();
	SAUT;
}
