/*
** my_str_isalpha.c for my_str_isalpha in /home/brassa_v/rendu
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Sat Oct 17 15:21:42 2015 valentin brassart
** Last update Mon Feb  8 17:00:16 2016 valentin brassart
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (0);
      i = i + 1;
    }
  return (1);
}
