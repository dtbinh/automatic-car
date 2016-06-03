/*
** conv_base_deci.c for conv_base_deci in /home/brassa_v/epitech/PSU/PSU_2015_minitalk/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Thu Feb  4 17:39:09 2016 valentin brassart
** Last update Tue Apr 19 13:52:27 2016 valentin brassart
*/

#include	"my.h"

char		conv_base_deci(char *nb, int base)
{
  int		i;
  int		j;
  int		mult;
  int		coef;
  char		final;

  i = 0;
  j = 0;
  final = 0;
  while (nb[i] != -1)
    i++;
  i--;
  while (j <= i)
    {
      coef = 1;
      mult = 0;
      while (mult < i - j)
	{
	  coef = coef * base;
	  mult++;
	}
      final = final + nb[j] * coef;
      j++;
    }
  return (final);
}
