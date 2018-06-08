/*
** EPITECH PROJECT, 2017
** my_print_comb.c
** File description:
** 
*/

void    my_putchar(char c);

void	display_numbers(char a, char b, char c)
{
	if (a != b && b != c && a != c){
		my_putchar(a);
		my_putchar(b);
		my_putchar(c);
	}
	if (!(a == '7' && b == '8' && c == '9')){
		my_putchar(',');
		my_putchar(' ');
	}
}

int	my_print_comb(void)
{
	char a = '0';
	char b = '1';
	char c = '2';

	while (a <= '7'){
		b = a + 1;
		while (b <= '8'){
			c = b + 1;
			while (c <= '9'){
				display_numbers(a, b, c);
				c++;
			}b++;
		}a++;
	}return (0);
}
