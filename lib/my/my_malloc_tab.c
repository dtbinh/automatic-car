/*
** my_malloc.c for strdup in /home/brassav/epitech/PSU/PSU_2015_minishell1/lib/my/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Mon Feb  1 12:39:45 2016 valentin brassart
** Last update Sun May 29 16:42:44 2016 valentin brassart
*/

#include	<stdlib.h>
#include	"my.h"

char		**my_malloc_tab(int nb)
{
  int		i;
  char		**dest;

  i = 0;
  if ((dest = malloc(sizeof(char *) * (nb))) == NULL)
    return (NULL);
  while (i < nb)
    {
      dest[i] = NULL;
      i++;
    }
  return (dest);
}
