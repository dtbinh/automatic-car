/*
** test-my_strcpy.c for my_strcpy in /home/brassa_v/rendu/Piscine_C_J06/tests
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Mon Oct  5 10:39:08 2015 valentin brassart
** Last update Sun May 29 16:48:14 2016 valentin brassart
*/

#include	<stdlib.h>
#include	"my.h"

char		*my_strcpy_malloc(char *src)
{
  int		i;
  char		*str;

  i = 0;
  str = my_malloc(my_strlen(src) + 1);
  if (str == NULL)
    return (NULL);
  if (src != NULL)
    while (src[i] != '\0')
      {
	str[i] = src[i];
	i = i + 1;
      }
  str[i] = 0;
  return (str);
}
