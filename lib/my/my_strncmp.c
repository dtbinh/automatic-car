/*
** my_strcmp.c for my_strcmp in /home/brassa_v/rendu/lib/my
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Wed Oct 28 10:15:37 2015 valentin brassart
** Last update Thu Jan 14 12:41:10 2016 valentin brassart
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	j;

  j = 0;
  i = 0;
  while ((s1[i] != 0 || s2[j] != 0) && i < n)
    {
      if (s1[i] < s2[j])
	return (-1);
      else if (s1[i] > s2[j])
	return (1);
      i++;
      j++;
    }
  return (0);
}
