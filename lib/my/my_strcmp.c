/*
** my_strcmp.c for my_strcmp in /home/brassa_v/rendu/lib/my
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Wed Oct 28 10:15:37 2015 valentin brassart
** Last update Sat Apr 30 19:52:35 2016 valentin brassart
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] != 0 && s2[i] != 0)
    {
      if (s1[i] < s2[i])
	return (-1);
      else if (s1[i] > s2[i])
	return (1);
      i++;
    }
  if (s1[i] == 0 && s2[i] == 0)
    return (0);
  else if (s1[i] == 0)
    return (-1);
  else
    return (1);
}
