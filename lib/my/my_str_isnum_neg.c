/*
** my_str_isalpha.c for my_str_isalpha in /home/brassa_v/rendu
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Sat Oct 17 15:21:42 2015 valentin brassart
** Last update Tue Apr 19 13:55:17 2016 valentin brassart
*/
#include	"my.h"

int		my_str_isnum_neg(char *str)
{
  int		i;

  i = 0;
  if (str[0] == '-')
    i++;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	i++;
      else
	return (0);
    }
  return (1);
}
