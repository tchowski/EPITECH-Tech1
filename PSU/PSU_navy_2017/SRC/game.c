/*
** EPITECH PROJECT, 2018
** game.c
** File description:
** game
*/

#include "my.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void	game_client(int a)
{
	SAUT;
	my_putstr("enemy connected\n");
	SAUT;
	my_putstr("my positions:\n");
	print_map(g_g.yes.map_1);
	SAUT;
	my_putstr("enemy's positions:\n");
	print_map(g_g.yes.map_point_p1);
}

void	game_server(void)
{
	my_putstr("my_positions:\n");
	print_map(g_g.yes.map_2);
	SAUT;
	my_putstr("enemy's positions:\n");
	print_map(g_g.yes.map_point_p2);
}

void	hit_or_not(char *buffer)
{
	int pos_y;
	int pos_x;

	pos_x = buffer[0] - 'A';
	pos_y = buffer[1] - '1';

	if (g_g.yes.map_1[pos_y][pos_x] != '.') {
		g_g.yes.map_point_p1[pos_y][pos_x] = 'x';
		my_putchar(buffer[0]);
		my_putchar(buffer[1]);
		my_putstr(": hit\n");
	}
	else {
		g_g.yes.map_point_p1[pos_y][pos_x] = 'o';
		my_putchar(buffer[0]);
		my_putchar(buffer[1]);
		my_putstr(": missed\n");
	}
}

void	play_client(void)
{
	int read_map;
	char *buffer = malloc(sizeof(char) * 10);

	SAUT;
	my_putstr("attack: ");
	read(0, buffer, 10);
	SAUT;
	hit_or_not(buffer);
	print_map(g_g.yes.map_1);
	SAUT;
	print_map(g_g.yes.map_point_p1);
	kill(g_g.PID.pid_player_2, SIGUSR2);
	game_server();
}

void	play_server(int n)
{
	int read_map;
	char *buffer = malloc(sizeof(char) * 10);

	SAUT;
	my_putstr("waiting for enemy's attack...\n");
	pause();
	SAUT;
	my_putstr("attack: ");
	read(0, buffer, 10);
	SAUT;
	hit_or_not(buffer);
}
