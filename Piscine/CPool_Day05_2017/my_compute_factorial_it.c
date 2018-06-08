/*
** EPITECH PROJECT, 2017
** my_compute_factorial_it.c
** File description:
** fonction iterative
*/

int my_compute_factorial_it (int nb)
{
	int i;
	int k;

	i = 1;
	k = 1;
	if (nb == 0)
		return (1);
	if ((nb > 12) || (nb < 0))
		return (0);
	while (i <= nb){
		k = i * k; 
		i++;
	}
	return (k);
}
