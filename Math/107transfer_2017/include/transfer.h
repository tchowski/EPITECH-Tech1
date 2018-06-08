/*
** EPITECH PROJECT, 2018
** transfer
** File description:
** .h
*/

#ifndef TRANSFER_H_
#define TRANSFER_H_

int checkarg(int ac, char** av);

int checkarg1(char* av);

int avancex(int ac, char ** av);

char** str_to_space(char *str);

int caclnbnbs(char* str);

double calcarg(char *av, double x);

double* stock_int(char *str, int size_nb);

double calcresult(int ac, char **av, double x);

char *my_strncpy(char *dest, char *src, int n);

#endif /*TRANSFER_H_*/
