/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** my_putstr
*/

void	my_putchar(char c);

int	my_putstr(char const *str)
{
	int j;

	j = 0;
	while (str[j] != '\0'){
		my_putchar(str[j]);
		j++;
	}
	return (0);
}
