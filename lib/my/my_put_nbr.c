/*
** my_put_nbr.c for my_put_nbr in /home/brassa_v/rendu/Piscine_C_J03
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Fri Oct  2 16:54:50 2015 valentin brassart
** Last update Tue Apr 19 13:54:02 2016 valentin brassart
*/
#include	"my.h"

int		my_put_nbr(int nb)
{
  int		i;

  if (nb < 0)
    {
      nb = nb * -1;
      my_putchar('-');
    }
  if (nb == 0)
    my_putchar('0');
  if (nb < 10 && nb > 0)
    my_putchar(48 + nb);
  if (nb > 9)
    {
      i = nb % 10;
      nb = nb / 10;
      my_put_nbr(nb);
      my_putchar(48 + i);
    }
  return (0);
}
