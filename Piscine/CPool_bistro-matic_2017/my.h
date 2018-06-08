/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my
*/

void my_putchar(char c);
int my_isneg(int nb);
void my_swap(int *a, int *b);
void my_putstr(char *str);
int my_strlen(char *str);

int number(char *str);
int strchar(char *str);
char *infin_add(char *s1, char *s2);
int cti(char c);
char itc(int n);
int my_strtol(int first, char *str, char **endptr);
int factor(char **str);
int checknext(char **str);
int summands(char **str);
char *parenthesis(char **str);
int check_pare(char **str);
void my_put_nbr(int nb);
int my_atoi(char *str);
char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size);
