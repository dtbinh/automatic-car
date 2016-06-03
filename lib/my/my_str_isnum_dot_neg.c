/*
** my_str_isalpha.c for my_str_isalpha in /home/brassa_v/rendu
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Sat Oct 17 15:21:42 2015 valentin brassart
** Last update Tue Apr 19 13:55:09 2016 valentin brassart
*/
#include	"my.h"

int		my_str_isnum_dot_neg(char *str)
{
  int		i;
  int		dot;

  i = 0;
  dot = 0;
  if (str[0] == '-')
    i++;
  if (str[0] == '.')
    return (0);
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	i++;
      else if (str[i] == '.')
	{
	  i++;
	  dot++;
	}
      else
	return (0);
    }
  if (dot > 1)
    return (0);
  return (1);
}
