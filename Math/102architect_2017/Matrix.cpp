#include "Matrix.h"
#include <iostream>
#include <iomanip>
#include <math.h>
#include "fonctions.h"

static float rad(float angle)
{
	return (angle * M_PI)/180;
}

Matrix::Matrix() : m_x(1), m_y(1)
{
	m_content.resize(m_x*m_y);
	m_content[0] = 0;
}

Matrix::Matrix(unsigned int x, unsigned int y) : m_x(x), m_y(y)
{
	m_content.resize(m_x*m_y);
	for (int i = 0; i < m_y; i++) {
		for (int p = 0; p < m_x; p++) {
			set(p, i, 0);
		}
	}
}

void Matrix::set(unsigned int x, unsigned int y, float value)
{
	if (!(x < 0 || x >= m_x || y < 0 || y >= m_y))
	{
		m_content[x+(y*m_x)] = value;
	}
}

float Matrix::get(unsigned int x, unsigned int y)
{
	if (x < 0 || x >= m_x || y < 0 || y >= m_y) {
		return 0;
	}
	else {
		return m_content[x+(y*m_x)];
	}
}


void Matrix::translation(Vector2 vec)
{
	print_view_t(vec.m_x, vec.m_y);
	for (int i = 0; i < 3; i++) {
		set (i, i, 1);
	}
	set(2, 0, vec.m_x);
	set(2, 1, vec.m_y);
}

void Matrix::homothety(Vector2 vec)
{
	print_view_h(vec.m_x, vec.m_y);
	set(2, 2, 1);
	set(0, 0, vec.m_x);
	set(1, 1, vec.m_y);
}

void Matrix::rotation(float angle)
{
	print_view_r(angle);
	set(0, 0, std::cos(rad(angle)));
	set(1, 0, std::sin(rad(angle)) * -1);
	set(0, 1, std::sin(rad(angle)));
	set(1, 1, std::cos(rad(angle)));
	set(2, 2, 1);
}

void Matrix::symmetry(float angle)
{
	print_view_s(angle);
	set(0, 0, std::cos(2 * rad(angle)));
	set(1, 0, std::sin(2 * rad(angle)));
	set(0, 1, std::sin(2 * rad(angle)));
	set(1, 1, std::cos(2 * rad(angle)) * -1);
	set(2, 2, 1);
}

void Matrix::display()
{
	std::cout << std::fixed << std::setprecision(2);
	for (int i = 0; i < m_y; i++) {
		for (int p = 0; p < m_x; p++) {
			std::cout << get(p, i);
			if (p < m_x - 1) {
				std::cout << '\t';
			}
		}
		std::cout << std::endl;
	}
}
