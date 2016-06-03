/*
** my_strcat.c for my_strcat in /home/brassa_v/rendu/Piscine_C_J07/ex_02
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Wed Oct  7 08:52:39 2015 valentin brassart
** Last update Sun May 29 16:47:46 2016 valentin brassart
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_strcat_malloc(char *dest, char *src)
{
  int	i;
  int	x;
  char	*save;

  i = 0;
  x = 0;
  save = my_malloc(my_strlen(dest) + my_strlen(src) + 1);
  if (save == NULL)
    return (NULL);
  while (dest[x] != '\0')
    {
      save[x] = dest[x];
      x = x + 1;
    }
  while (src[i] != '\0')
    {
      save[x] = src[i];
      x = x + 1;
      i = i + 1;
    }
  save[x] = '\0';
  return (save);
}
