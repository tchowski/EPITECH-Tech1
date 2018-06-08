/*
** EPITECH PROJECT, 2017
** pong.h
** File description:
** header file for 101pong
*/

#ifndef PONG_H_
#define PONG_H_

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

struct vector
{
	float x;
	float y;
	float z;
};
typedef struct vector vector_t;	

int my_getnbr(char const *str);
float my_get_nbr_float(char *str);
int my_strlen(char const *str);
int my_str_isnum(char const *str);
int my_str_isnum_float(char const *str);

void pong(float *);
vector_t *init_vector(float, float, float);
vector_t *speed_vector(vector_t *, vector_t *);
vector_t *time_vector(vector_t *, vector_t *, float);
int touch_bat(vector_t *, vector_t *);
float compute_angle(vector_t *);

#endif
