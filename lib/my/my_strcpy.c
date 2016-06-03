/*
** test-my_strcpy.c for my_strcpy in /home/brassa_v/rendu/Piscine_C_J06/tests
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Mon Oct  5 10:39:08 2015 valentin brassart
** Last update Sun May 29 16:48:10 2016 valentin brassart
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_strcpy(char *dest, char *src)
{
  int		i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = 0;
  return (dest);
}
