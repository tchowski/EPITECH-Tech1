/*
** EPITECH PROJECT, 2017
** my_str_isnum.c
** File description:
** chek if the string only contains digits
*/
int my_str_isnum(char const *str)
{
	if (*str == '\0') {
		return (1);
	}
	for(int i = 0; str[i] != '\0'; i++) {
		if (str[i] <= 47 || str[i] >= 58)
			return (0);
	}
	return (1);
}
