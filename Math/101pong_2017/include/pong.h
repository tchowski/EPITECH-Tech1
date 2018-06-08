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

void speed_vector(float *str);
vector_t *init_vector(vector_t *vec, float ex, float ey, float ez);
#endif
