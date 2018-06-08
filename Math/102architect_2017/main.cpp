//
// EPITECH PROJECT, 2017
// main.cpp
// File description:
// main
//

#include <iostream>
#include <vector>
#include "fonctions.h"
#include "Vector2.h"
#include "Matrix.h"
#include "defines.h"
#include <vector>

int handle_error(int argc, char **argv)
{
	if (argc >= 3 && argv[3][0] == '-') {
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main (int argc, char **argv)
{
	if (handle_error(argc, argv) == TRUE) {
		std::vector<Matrix> deformations;
		Vector2 vec(my_atoi(argv[1]), my_atoi(argv[2]));
		int arg = 3;
		while (arg < argc) {
			Matrix deformation(3, 3);
			switch (argv[arg][1]) {
				case 't' : 
					deformation.translation(Vector2(my_atoi(argv[arg+1]), my_atoi(argv[arg+2])));
					arg += 3;
				break;
				case 'h' : 
					deformation.homothety(Vector2(my_atoi(argv[arg+1]), my_atoi(argv[arg+2])));
					arg += 3;
				break;
				case 'r' : 
					deformation.rotation(my_atoi(argv[arg+1]));
					arg += 2;
				break;
				case 's' : 
					deformation.symmetry(my_atoi(argv[arg+1]));
					arg += 2;
				break;
			}
			deformations.push_back(deformation);		
		}
		
		calc_vec_from_Mat(vec, matrix_mult(deformations));
	}
	else {
		return 84;
	}
	return (0);
}
