/*
** my_putchar.c for my_putchar in /home/bouche_w//lib/my/code_source
** 
** Made by leo bouchet
** Login   <bouche_w@epitech.net>
** 
** Started on  Fri Oct 12 14:17:46 2012 leo bouchet
** Last update Fri Oct 12 14:18:09 2012 leo bouchet
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
