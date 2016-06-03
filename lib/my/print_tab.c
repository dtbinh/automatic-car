/*
** print_tab.c for printtab in /home/brassa_v/epitech/PSU/PSU_2015_minishell2/lib/my/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Sun Apr 10 20:15:27 2016 valentin brassart
** Last update Tue Apr 19 13:56:30 2016 valentin brassart
*/

#include	<stdlib.h>
#include	"my.h"

void		print_tab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      i++;
    }
}
