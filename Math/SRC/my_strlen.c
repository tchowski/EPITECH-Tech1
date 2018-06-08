/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** count the number of char in a string
*/
void my_putchar(char c);

int my_strlen(char const *str)
{
	int count = 0;

	while (*str != '\0') {
		count++;
		str++;
	}
	return (count);
}
