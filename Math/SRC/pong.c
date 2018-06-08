/*
** EPITECH PROJECT, 2017
** pong.c
** File description:
** pong
*/

#include "include.h"

vector_t *init_vector(float ex, float ey, float ez)
{
	vector_t *vec = malloc(sizeof(vector_t *));

	vec->x = ex;
	vec->y = ey;
	vec->z = ez;
	return (vec);
}

void display_vec(vector_t *vec)
{
	printf("(%.2f;%.2f;%.2f)\n", vec->x, vec->y, vec->z);
}

void pong(float *str)
{
	vector_t *vec0 = init_vector(str[0], str[1], str[2]);
	vector_t *vec1 = init_vector(str[3], str[4], str[5]);
	vector_t *vec_speed = speed_vector(vec0, vec1);
	vector_t *vec_tn = time_vector(vec1, vec_speed, str[6]);

	printf("The speed vector coordinates are :\n");
	display_vec(vec_speed);
	printf("At time t+%.0f, ball coordinates will be :\n", str[6]);
	display_vec(vec_tn);
	if (touch_bat(vec1, vec_speed) == 1) {
		printf("The incidence angle is :\n");
		printf("%.2f degrees\n", compute_angle(vec_speed));
	}
	else
		printf("The ball won't reach the bat.\n");
}
