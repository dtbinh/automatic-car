/*
** my_getnbr.c for my_getnbr in /home/brassa_v/rendu/exo_simple
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Thu Oct 15 17:20:34 2015 valentin brassart
** Last update Tue Apr 26 17:37:41 2016 valentin brassart
*/

#include 	"my.h"

int		getnbr(int temp, int nb, int neg, char *nbr)
{
  int		i;

  i = temp;
  while (nbr[i] >= '0' && nbr[i] <= '9')
    {
      nb = nb * 10 + (nbr[i] - 48);
      i = i + 1;
      if  ((((i - temp > 10 || nb >= 214748364) && nbr[i] > '8') &&
	    neg == -1) ||
           (((i - temp > 10 || nb >= 214748364) && nbr[i] > '7') && neg == 1))
	return (0);
    }
  return (nb * neg);
}

int		my_getnbr(char *nbr)
{
  int		i;
  int		nb;
  int		neg;
  int		temp;

  i = 0;
  nb = 0;
  neg = 1;
  while (nbr[i] < '0' || nbr[i] > '9')
    i = i + 1;
  temp = i;
  if (i > 0)
    {
      while (i > 0 && (nbr[i - 1] == '+' || nbr[i - 1] == '-'))
	{
	  i = i - 1;
	  if (nbr[i] == '-')
	    neg = neg * -1;
	}
    }
  return (getnbr(temp, nb, neg, nbr));
}
