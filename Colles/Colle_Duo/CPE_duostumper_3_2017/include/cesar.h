/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** this is where is the structure and the fuction declaration
*/

#ifndef MY
#define MY

static const int EXIT_ERROR = 84;
static const char *error = "Usage: ./cesar -f filename key \
OR ./cesar -s string key\n";

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*open_file(char *av);
int	put_int_file(const char *crypted);

#endif
