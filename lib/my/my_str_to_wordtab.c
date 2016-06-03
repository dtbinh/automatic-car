/*
** my_wordtab.c for wordtab in /home/brassav/epitech/PSU/PSU_2015_minishell1/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Sat Jan 23 22:49:49 2016 valentin brassart
** Last update Tue Apr 26 14:53:49 2016 valentin brassart
*/
#include	<unistd.h>
#include	<stdlib.h>
#include	<stdio.h>
#include	"my.h"

int		nw(char *str, char c, char c2)
{
  int		nb;
  int		i;

  i = 0;
  nb = 3;
  if (str != NULL)
    {
      while (str[i] != 0)
	{
	  if (str[i] == c || str[i] == c2 || str[i] == 9)
	    nb++;
	  i++;
	}
      return (nb);
    }
  else
    return (0);
}

void		init(int *i, int *pos_tab)
{
  *i = 0;
  *pos_tab = 0;
}

char		**my_str_to_wordtab(char *st, char c, char c2)
{
  int		i;
  int		pos_tab;
  int		pos_str;
  char		**tab;

  init(&i, &pos_tab);
  tab = my_malloc_tab(nw(st, c, c2) + 2);
  while (st[i] != 0)
    {
      pos_str = 0;
      tab[pos_tab] = my_malloc(my_strlen(st) + 1);
      if (st[i] != c && st[i] != c2)
	{
	  while (st[i] != c && st[i] != c2&& st[i] != 0)
	    tab[pos_tab][pos_str++] = st[i++];
	  tab[pos_tab][pos_str] = 0;
	  pos_tab++;
	}
      else
	i++;
    }
  tab[pos_tab] = NULL;
  return (tab);
}
