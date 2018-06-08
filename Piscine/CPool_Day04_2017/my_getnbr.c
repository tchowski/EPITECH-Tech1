/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
	int renvoi = 0;
	int f = 1;
	int g = 1;
	int i = 0;

	while (str[i] != '\0' && g == 1){
		if (str[i] >= '0' && str[i] <= '9'){
			if (f == 1){
				f = 0;
			}
			renvoi *= 10;
			renvoi += str[i]-'0';
		}
		else{
			if (f == 0){
				g = 0;
			}
		}
		i++;
	}
	return (renvoi);
}
