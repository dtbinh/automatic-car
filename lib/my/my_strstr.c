/*
** my_strstr.c for my_strstr in /home/jauber_e/rendu/exos_simples
**
** Made by Elise Jaubert
** Login   <jauber_e@epitech.net>
**
** Started on  Sun Oct 18 14:15:24 2015 Elise Jaubert
** Last update Tue May 24 15:13:17 2016 jauber_e
*/

#include <stdlib.h>

char		*my_strstr(char *str, char *to_find)
{
  int		i;

  i = 0;
  if (str == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      while (str[i] == to_find[i] && str[i] != '\0')
	i++;
      if (to_find[i] == 0)
	return (str);
      str++;
    }
  return (NULL);
}
