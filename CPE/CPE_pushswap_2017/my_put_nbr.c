/*
** my_put_nbr.c for my_put_nbr in /home/bouche_w//Projet/piscine/Jour_04
** 
** Made by leo bouchet
** Login   <bouche_w@epitech.net>
** 
** Started on  Thu Oct  4 09:28:11 2012 leo bouchet
** Last update Sun Jan 27 11:27:02 2013 leo bouchet
*/

void my_putchar(char c);

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
    }
  if (nb > 9)
    my_put_nbr(nb / 10);
  my_putchar(nb % 10 + '0');
}
