/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "bistro-matic.h"

void my_putstr(char *str);
int my_strlen(char *str);
int my_atoi(char *str);

static void check_base(char *base);
static void check_ops(char *ops);
static char *get_expr(unsigned size);

int main(int ac, char **av)
{
	unsigned int size;
	char *expr;

	if (ac != 4) {
		my_putstr("Usage: ");
		my_putstr(av[0]);
		my_putstr(" base ops\"()+_*/%\" exp_len\n");
		return (EXIT_USAGE);
	}
	check_base(av[1]);
	check_ops(av[2]);
	size = my_atoi(av[3]);
	expr = get_expr(size);
	my_putstr(eval_expr(av[1], av[2], expr, size));
	return (EXIT_SUCCESS);
}

static void check_base(char *base)
{
	if (my_strlen (base) < 2) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_BASE);
	}
}

static char *get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_SIZE_NEG);
	}
	expr = malloc(size + 1);
	if (expr == 0) {
		my_putstr(ERROR_MSG);
		exit(EXIT_MALLOC);
	}
	if (read(0, expr, size) != size) {
		my_putstr(ERROR_MSG);
		exit(EXIT_READ);
	}
	expr[size] = 0;
	return (expr);
}
static void check_ops(char *ops)
{
	if (my_strlen(ops) != 7) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
}

//void *malloc(unsigned int);
/*
#define OP_OPEN_PARENT_IDX 0
#define OP_CLOSE_PARENT_IDX 1
#define OP_PLUS_IDX 	2
#define OP_SUB_IDX 	3
#define OP_NEG_IDX 	3
#define OP_MULT_IDX 	4
#define OP_DIV_IDX 	5
#define OP_MOD_IDX 	6

#define EXIT_USAGE 	84
#define EXIT_BASE 	84
#define EXIT_SIZE_NEG 	84
#define EXIt_MALLOC  	84
#define EXIT_READ  	84
#define EXIT_OPS 	84

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"
*/
char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size);
