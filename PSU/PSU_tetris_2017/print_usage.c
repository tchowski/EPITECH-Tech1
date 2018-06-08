/*
** EPITECH PROJECT, 2018
** print_usage.c
** File description:
** print_usage
*/

#include "my.h"
#include <curses.h>
#include <term.h>
#include <unistd.h>
#include <stdlib.h>

void	print_usage(char *argv)
{
	my_putstr("Usage: ");
	my_putstr(argv);
	my_putstr(" [options]\nOptions:\n");
	my_putstr("--help\t\t	Display this help\n");
	my_putstr("-L --level={num}\tStart Tetris at level num (def: 1)\n");
	my_putstr("-l --key-left={K}\tMove the tetrimino LEFT using the K key (def: left arrow)\n");
	my_putstr("-r --key-right={K}\tMove the tetrimino RIGHT using the K key (def: right arrow)\n");
	my_putstr("-t --key-turn={K}\tTurn the tetrimino clockwise 90d using the K key (def: top)\n");
	my_putstr("-d --key-drop={K}\tDROP the tetrimino using the K key (def: down arrow)\n");
	my_putstr("-q --key-quit={K}\tQUIT the game using the K key (def: 'q' key)\n");
	my_putstr("-p --key-pause={K}\tPAUSE/RESTART the game using the K key (def: space bar)\n");
	my_putstr("--map-size={row,col}\tSet the numbers of rows and columns of the map (def: 20,10)\n");
	my_putstr("-w --without-next\tHide next tetrimino (def: false)\n");
	my_putstr("-D --debug\t\tDebug mode (def: false)\n");
}

void	print_usage_debug(struct tetris_t *t)
{
	my_putstr("*** DEBUG MODE ***\n");
	my_putstr("Key Left : ");
	my_putstr(t->keyl);
	my_putstr("\nKey Right : ");
	my_putstr(t->keyr);
	my_putstr("\nKey Turn : ");
	my_putstr(t->keyt);
	my_putstr("\nKey Drop : ");
	my_putstr(t->keyd);
	my_putstr("\nKey Quit : ");
	my_putstr(t->keyq);
	my_putstr("\nKey Pause : ");
	my_putstr(t->keyp);
	my_putstr("\nNext : ");
	my_putstr(t->next);
	my_putstr("\nLevel : ");
	my_putstr(t->level);
	my_putstr("\nSize : ");
	my_putstr(t->size);
	SAUT;
	print_other();
}

void	print_other(void)
{
	char **path = malloc(sizeof(char *) * 100);
	char **path_nb = malloc(sizeof(char*)*100);

	path = open_dir();
	my_putstr("Tetriminos : ");
	my_putchar(cp_tetris(path) + 48);
	SAUT;
	file_recu();
	my_putstr("Press any key to start Tetris");
	SAUT;
}

void	put_str_struct(struct tetris_t *t)
{
	int s;

	setupterm(NULL, 1, &s);
	t->size = "20*10";
	t->level = "1";
	t->next = "Yes";
	t->keyp = "(space)";
	t->keyq = "q";
	t->keyd = tigetstr("kcud1");
	t->keyt = tigetstr("kcuu1");
	t->keyr = tigetstr("kcuf1");
	t->keyl = tigetstr("kcub1");
}
