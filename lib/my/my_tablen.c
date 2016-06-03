/*
** my_tablen.c for tablen in /home/brassav/epitech/PSU/PSU_2015_minishell1/lib/my/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Mon Jan 18 13:02:13 2016 valentin brassart
** Last update Mon Feb  8 17:03:21 2016 valentin brassart
*/
#include	<unistd.h>

int		my_tablen(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    i++;
  return (i);
}
