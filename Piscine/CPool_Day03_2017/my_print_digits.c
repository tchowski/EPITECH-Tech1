/*
** EPITECH PROJECT, 2017
** my_print_digits.c
** File description:
** 
*/

void    my_putchar(char c);

int	my_print_digits(void)
{
	int i;

	i = '0';
	while(i <= '9'){
		my_putchar(i);
		i++;
	}
	return (i);
}
