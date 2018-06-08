#include "my.h"

int my_strlen(char const *str)
{
	int retour = 0;
	for (int i = 0; str[i] != 0; i++){
		retour++;
	}
	return retour;
}
