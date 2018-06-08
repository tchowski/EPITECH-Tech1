/*
** EPITECH PROJECT, 2017
** my_atoi.c
** File description:
** my_atoi
*/

int my_pow(int x, int pui);
int my_strlen(char *str);

int my_atoi(char *str)
{
	char sign;
	int nb;
	int i;
	int j;

	if (str == 0)
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
}
