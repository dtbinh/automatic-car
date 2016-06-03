/*
** my_revstr.c for my_revstr in /home/brassa_v/rendu/Piscine_C_J06/tests
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Mon Oct  5 10:39:08 2015 valentin brassart
** Last update Tue Apr 19 13:54:53 2016 valentin brassart
*/
#include	"my.h"

char		*my_revstr(char *str)
{
  int		i;
  int		x;
  int		y;
  char		temp;
  char		*final;

  i = 0;
  final = my_malloc(my_strlen(str) + 1);
  while (str[i] != '\0')
    i = i + 1;
  x = i - 1;
  i = 0;
  y = x;
  while (i <= y / 2)
    {
      temp = str[i];
      final[i] = str[x];
      final[x] = temp;
      i = i + 1;
      x = x - 1;
    }
  final[y + 1] = '\0';
  return (final);
}
