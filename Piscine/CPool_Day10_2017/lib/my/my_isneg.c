/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** 
*/

void    my_putchar(char c);

int	my_isneg(int n)
{
	if (n >= 0)
		my_putchar('P');
	else
		my_putchar('N');
	return (n);
}
