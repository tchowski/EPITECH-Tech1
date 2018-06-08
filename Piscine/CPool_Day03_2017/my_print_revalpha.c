/*
** EPITECH PROJECT, 2017
** my_print_revalpha.c
** File description:
** 
*/

void    my_putchar(char c);

int	my_print_revalpha(void)
{
	char letter;

	letter = 'z';
	while(letter >= 'a'){
		my_putchar(letter);
		letter--;
	}
	return (0);
}
