/*
** my_strcat.c for my_strcat in /home/brassa_v/rendu/Piscine_C_J07/ex_02
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Wed Oct  7 08:52:39 2015 valentin brassart
** Last update Sun May 29 16:47:54 2016 valentin brassart
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_strcat(char *dest, char *src)
{
  int	i;
  int	x;

  i = 0;
  x = my_strlen(dest);
  if (src != NULL)
    {
      while (src[i] != '\0')
	{
	  dest[x] = src[i];
	  x = x + 1;
	  i = i + 1;
	}
      dest[x] = '\0';
    }
  return (dest);
}
