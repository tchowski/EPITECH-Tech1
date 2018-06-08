/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** Return a number sent as a string
*/
# include <stdio.h>

static int count_neg(char const *str)
{
	int count = 0;

	while(*str < '0' || *str > '9') {
		if (*str == '-') {
			count++;
		}
		str++;
	}
	return (count);
}

static int my_tilllnumber(char const *str)
{
	int count = 0;

	while(*str < '0' || *str > '9') {
		str++;
		count++;
	}
	return (count);
}

int my_getnbr(char const *str)
{
	int len;
	int neg;
	long total = 0;

	len = my_tilllnumber(str);
	neg = count_neg(str);
	str = str + len;
	while(*(str) >= '0' && *(str) <= '9' && *str != '\0') {
		total = total * 10 + (*str - '0');
		str++;
	}
	if (total > 2147483647)
		return 0;
	if (neg % 2 == 0) {
		return (total);
	} else {
		return (total * (-1));
	}
}
