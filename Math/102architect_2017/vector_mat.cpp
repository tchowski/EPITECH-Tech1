#include "fonctions.h"
#include "Matrix.h"
#include "Vector2.h"
#include <iostream>

static Vector2 calc_result(Vector2 vec, Matrix mat)
{
	float v[3] = {0, 0, 0};
	float u[3] = {vec.m_x, vec.m_y, 1};

	for (int i = 0; i < 3; i++) {
		v[i] = 0;
		for (int j = 0; j < 3; j++) {
			v[i] = v[i] + mat.get(j, i) * u[j];
		}
	}
	Vector2 result {v[0], v[1]};
	return result;
}

void calc_vec_from_Mat(Vector2 vec, Matrix mat)
{
	std::cout << "(" << (int) vec.m_x << "," << (int) vec.m_y << ") => (";
	Vector2 result = calc_result(vec, mat);
	std::cout << result.m_x << "," << result.m_y << ")" << std::endl;
}
