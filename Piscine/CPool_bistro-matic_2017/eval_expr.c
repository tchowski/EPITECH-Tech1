#include <stdio.h>
#include "my.h"

char *eval_expr(char const *base, char const *ops, char const *expr, unsigned int size)
{


}

int my_strtol(int first, char *str, char **endptr)
{
	int i = 0;
	int j = 0;
	int t = 0;
	int neg = 1;
	
//	printf("%d\n", first);
	if (first < 0) {
		while (str[i] < '0' || str[i] > '9') {
			if (str[i] == '-')
				neg = -1;
			i++;
		}
		i = 0;
	}
//	  printf("%d\n", neg);
	while (str[i] != '\0') {
		while (str[i] >= '0' && str[i] <= '9') {
			if (str[i - 1] == '-')
				neg = -1;
			j = str[i] - 48;
			t = (t * 10) + j;
			i++;		
			if (str[i] < '0' || str[i] > '9') {
				t *= neg;
			
 		*endptr = &str[i]; //&str[i] = str + i
		str = *endptr;
//		printf("%d\n", t);
	return (t);			}
		}
		i++;
	}
return (0);
}

int factor(char **str)
{	
	int i = 0;
	int res = my_strtol(1, str[1], &str[1]);

	while (str[1][i] != '\0' && str[1][i] != '+' && str[1][i] != '-') {

	if (str[1][i] == '*') {
		res = res * my_strtol(1, str[1], &str[1]);
		i = -1;
		}
	if (str[1][i] == '/') {
		res = res / my_strtol(1, str[1], &str[1]);
		i = -1;
		}
	if (str[1][i] == '%') {
		res = res % my_strtol(1, str[1], &str[1]);
		i = -1;
		}
	i++;
	}
//printf("%d\n", res);
return (res);
}

int checknext(char **str)
{
	int i = 0;
	int fact = 0;
	while (str[1][i] <= '0' && str[1][i] >= '9' && str[1][i] != '\0') {
		i++;
	}
	while (str[1][i] >= '0' && str[1][i] <= '9' && str[1][i] != '\0') {
		i++;
	}
	while (str[1][i] != '\0' || str[1][i] != '+' || str[1][i] != '-') {

	if (str[1][i] == '*' || str[1][i] == '/' || str[1][i] == '%') {
		fact = factor(str);
//		printf("%d\n", fact);
		return (fact);
		}
		i++;
}
	return (0);
}


int summands(char **str)
{	
	int i = 0;
	int res = my_strtol(-1, str[1], &str[1]);
	int fact = 0;

//	printf("%d\n", res);
 while (str[1][i] != '\0') {
	switch (str[1][i]) {
	case '*' : res = res * factor(str), i = -1; break;
	case '/' : res = res / factor(str), i = -1; break;
	case '%' : res = res % factor(str), i = -1; break;		   
	} 		 
	if (str[1][i] == '+') {
		fact = checknext(str);
		if (fact != 0) 
			res = res + fact;
		else {
			res = res + my_strtol(1, str[1], &str[1]);
			printf("%d\n", res);
		}
		i = -1;
		}
	if (str[1][i] == '-') {
		fact = checknext(str);
//		printf("%d\n", fact);
		if (fact != 0) {
			res = res - fact;
		} else {
		res = res - my_strtol(1, str[1], &str[1]);
//		printf("%d", res);
		}
		i = -1;		
//						gere pas 1-1
		}
	i++;	
	}
//	printf("%d\n", res);
//	printf("%s\n", str[1]);
	
//						 changer res en string a renvoyer
	return (res);
}

char *parenthesis(char **str)
{
	int i = 0;
	int j = 0;
	int n = 0;
	char **stpr;

//check presence de parenthese dans summands ou fonction annexe
//while (str[1][i] != '\0') {
	for (; str[1][i] != ')' ; i++, j++) 
	for (; str[1][j] != '('; j--)
	for (; j != i; j++, n++)
		stpr[1][n] = str[1][j];
	summands(stpr);	
	for (; str[1][j] != '('; j--)
	for (n = 0; j != i; j++, n++)
	str[1][j] = stpr[1][n];

		return (*str);
}

int check_pare(char **str)
{
	int i;

	while (str[1][i] != '\0') {
		if (str[1][i] == '(' || str[1][i] == ')')
			parenthesis(str);
	i++;
}
	summands(str);
	return (0);
}
/*
int main(int ac, char **av)
{
	if (ac == 2) {
		my_put_nbr(summands(av));
		return (0);
	}
	return(84);
}
*/
