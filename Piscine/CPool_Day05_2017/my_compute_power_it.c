/*
** EPITECH PROJECT, 2017
** my_compute_power_it.c
** File description:
** puissance
*/

int my_compute_power_it(int nb, int p)
{
	int k;

	k = 1;
	if (p == 0)
		return (1);
	if (p < 0)
		return (0);
	while (p > 0){
		k = nb * k;
		p--;
	}
	return (k);
}
