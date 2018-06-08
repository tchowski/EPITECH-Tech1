//
// EPITECH PROJECT, 2017
// view_fonc.cpp
// File description:
// view_fonc
//

#include <iostream>
#include "fonctions.h"
#include "Vector2.h"

void	print_view_t(int nb1, int nb2)
{
	std::cout << "Translation by the vector " << '(' << nb1 << ", " << nb2 << ')' <<std::endl;
}

void	print_view_h(int nb1, int nb2)
{
	std::cout << "Homothety by the ratios " << nb1 << " and " << nb2 << std::endl;
}

void	print_view_r(int nb1)
{
	std::cout << "Rotation at a " << nb1 << " degree angle " << std::endl;
}

void	print_view_s(int nb1)
{
	std::cout << "Symmetry about an axis inclined with an angle of " << nb1 << " degrees" << std::endl;
}
