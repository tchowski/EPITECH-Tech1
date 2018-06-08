/*
** EPITECH PROJECT, 2017
** my_str_isnum_float.c
** File description:
** chek if the string only contains digits
*/

int my_str_isnum_float(char const *str)
{
	int point_counter = 0;
	int i = 0;

	if (*str == '\0' || *str == '.') {
		return (0);
	}
	if (*str == '-')
		str++;
	for(; str[i] != '\0'; i++) {
		if (str[i] == '.') {
			point_counter++;
		} else if (str[i] <= 47 || str[i] >= 58)
			return (0);
	}
	if (str[i - 1] == '.' || point_counter > 1)
		return(0);
	return (1);
}
