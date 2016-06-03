/*
** my_strncpy.c for my_strncpy in /home/brassa_v/rendu/Piscine_C_J06/tests
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Mon Oct  5 10:39:08 2015 valentin brassart
** Last update Tue Apr 19 13:56:21 2016 valentin brassart
*/

#include	"my.h"

char		*my_strncpy(char *src, int nb)
{
  int		i;
  char		*str;

  i = 0;
  str = my_malloc(my_strlen(src) + 1);
  while (src[i] != '\0' && nb > i)
    {
      str[i] = src[i];
      i = i + 1;
    }
  str[i] = '\0';
  return (str);
}
