/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
	int k = 0;
	int i = 0;

	while ( n > k && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]){
		i++;
		//n--;
	}
	return (s1[i] - s2[i]);
}
