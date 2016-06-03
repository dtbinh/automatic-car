/*
** test-my_putstr.c for my_putstr in /home/brassa_v/rendu/Piscine_C_J04/tests
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Thu Oct  1 19:00:36 2015 valentin brassart
** Last update Mon Feb  8 17:02:32 2016 valentin brassart
*/
#include	<unistd.h>

unsigned int	my_strlenunsign(char *str)
{
  unsigned int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
