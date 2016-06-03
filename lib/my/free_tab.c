/*
** free_tab.c for free_tab in /home/brassa_v/epitech/PSU/PSU_2015_minishell2/lib/my/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Mon Mar 28 14:27:18 2016 valentin brassart
** Last update Tue Apr 19 13:52:58 2016 valentin brassart
*/

#include <stdlib.h>
#include "my.h"

void	free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab[i])
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}
