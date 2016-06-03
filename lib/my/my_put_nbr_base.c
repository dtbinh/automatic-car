/*
** my_put_nbr.c for my_put_nbr in /home/brassa_v/rendu/Piscine_C_J03
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Fri Oct  2 16:54:50 2015 valentin brassart
** Last update Tue Apr 19 13:53:51 2016 valentin brassart
*/

#include	"my.h"

int		my_put_nbr_base(unsigned int nb, char *base)
{
  int		i;

  if (nb == 0)
    my_putchar('0');
  if (nb < my_strlenunsign(base) && nb > 0)
    my_putchar(base[nb]);
  if (nb >= my_strlenunsign(base))
    {
      i = nb % my_strlen(base);
      nb = nb / my_strlen(base);
      my_put_nbr_base(nb, base);
      my_putchar(base[i]);
    }
  return (0);
}
