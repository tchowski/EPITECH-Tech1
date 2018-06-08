/*
** EPITECH PROJECT, 2017
** speed_vector.c
** File description:
** Compute and display a speed vector
*/

#include "include.h"

vector_t *speed_vector(vector_t *vec0, vector_t *vec1)
{
	vector_t *speed_vec = malloc(sizeof(vector_t *));

	speed_vec->x = vec1->x - vec0->x;
	speed_vec->y = vec1->y - vec0->y;
	speed_vec->z = vec1->z - vec0->z;
	return (speed_vec);
}

vector_t *time_vector(vector_t *vec1, vector_t *speed_vec, float n)
{
	vector_t *vec_tn = malloc(sizeof(vector_t *));

	vec_tn->x = vec1->x + (n*speed_vec->x);
	vec_tn->y = vec1->y + (n*speed_vec->y);
	vec_tn->z = vec1->z + (n*speed_vec->z);
	return (vec_tn);
}

int touch_bat(vector_t *vec1, vector_t *sp_vec)
{
	if ((vec1->z > 0 && sp_vec->z < 0) || (vec1->z < 0 && sp_vec->z > 0))
		return (1);
	return (0);
}

float compute_angle(vector_t *speed)
{
	float sp_norm = sqrt(pow(speed->x, 2) +
			     pow(speed->y, 2) +
			     pow(speed->z, 2));
	float rad_angle = asinf(speed->z / sp_norm);
	int neg = 1;

	if (rad_angle < 0)
		neg = -1;
	return (rad_angle * (180 / M_PI) * neg);
}
