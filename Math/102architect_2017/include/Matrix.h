#ifndef MATRIX_H_
#define MATRIX_H_

#include <vector>
#include "Vector2.h"

class Matrix
{
public:
	Matrix();
	Matrix(unsigned int x, unsigned int y);
	
	void set(unsigned int x, unsigned int y, float value);
	float get(unsigned int x, unsigned int y);
	

	void translation(Vector2 vec);
	void homothety(Vector2 vec);
	void rotation(float angle);
	void symmetry(float angle);
	
	void display();
private:
	unsigned int m_x;
	unsigned int m_y;
	std::vector<float> m_content;
};

#endif