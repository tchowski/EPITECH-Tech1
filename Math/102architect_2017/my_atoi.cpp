/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** my_atoi
*/

#define NULL 0

int my_strlen(char *str);
int my_pow(int x, int pui);

int my_atoi(char *str)
{
	/*
	char sign;
	int nb;
	int i;
	int j;

	if (str == NULL)
		return (0);
	sign = 0;
	if (*str == '-')
		sign++;
	j = my_strlen(str + sign);
	i = -1;
	nb = 0;
	while (++i != j)
		nb+= my_pow(10, j - i - 1) * (str[i + sign] - '0');
	if (sign)
		return (-nb);
	else
		return (nb);
		*/
	int nb = 0;
	int i = 0;
	if (str[0] == '-') {
		i++;
	}
	while (str[i]) {
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (str[0] == '-') {
		return nb * -1;
	}
	else {
		return nb;
	}
	
}
