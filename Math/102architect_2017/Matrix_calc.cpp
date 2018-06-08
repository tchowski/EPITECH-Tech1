#include "Matrix.h"
#include <vector>
#include <iostream>

static Matrix Matrix_m(Matrix a, Matrix b)
{
	Matrix c(3, 3);
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			c.set(i, j, 0);
			for (int k = 0; k < 3; k++) {
				c.set(i, j, c.get(i, j) + (a.get(i, k) * b.get(k, j)));
			}
		}
	}
	return c;
}

Matrix matrix_mult(std::vector<Matrix> mats)
{
	Matrix result(3, 3);
	for (int i = 0; i < 3; i++) {
		result.set(i, i, 1);
	}
	for (int i = 0; i < mats.size(); i++) {
		result = Matrix_m(result, mats[i]);
	}
	result.display();

	return result;
}