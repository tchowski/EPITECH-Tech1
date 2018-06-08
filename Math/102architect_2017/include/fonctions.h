#ifndef FONCTIONS_H_
#define FONCTIONS_H_

#include "Matrix.h"
#include <vector>

int my_atoi(char *str);
int my_pow(int x, int pui);
int my_strlen(char *str);
void print_view_t(int nb1, int nb2);
void print_view_h(int nb1, int nb2);
void print_view_r(int nb1);
void print_view_s(int nb1);
Matrix matrix_mult(std::vector<Matrix> mats);
void calc_vec_from_Mat(Vector2 vec, Matrix mat);

#endif
