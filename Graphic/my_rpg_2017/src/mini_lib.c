#include <stdlib.h>

int my_atoi(char *str)
{
	int r = 0;
	int isneg = 1;
	int i = 0;

	if (str[i] == '-') {
		isneg = -1;
		i += 1;
	}
	while (str[i] >= '0' && str[i] <= '9') {
		r *= 10;
		r += str[i] - 48;
		i += 1;
	}
        return r * isneg;
}

int length(int nb)
{
	long lNb = nb;
	int l = 0;
	if (nb < 0) {
		lNb *= -1;
	}
	for (long r = lNb; r > 0 ; r/=10) {
		l++;
	}
	return l;
}

int expos(int nb, int pow)
{
        int retour = 1;
	if (pow >= 0){
		for (int c = 0; c<pow; c++) {
                 	retour *= nb;
		}                                                                             
        }
	else {
                return 0;
        }
        return retour;
}

char convert(int n)
{
	return n+48;
}

char *to_string(int n)
{
	char *new = malloc(sizeof(char) * length(n) + 1);
	new[length(n)] = 0;
	long lNb = n;
	int chiffre = 0;

	if (n == 0)
	{
		free(new);
		new = malloc(sizeof(char) * 2);
		new[0] = '0';
		new[1] = 0;
		return new;
	}
	
	for (int c=1; c <= length(n); c++) {
		chiffre = ((lNb/expos(10, length(n)-c)));
		lNb -= chiffre * expos(10, length(n)-c);
		new[c-1] = convert(chiffre);
	}
    	return new;
}
