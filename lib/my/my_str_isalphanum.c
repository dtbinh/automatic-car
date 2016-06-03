/*
** my_str_isalphanum.c for my_str_isalphanum in /home/brassav/epitech/PSU/PSU_2015_minishell1/lib/my/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Fri Jan 15 19:23:39 2016 valentin brassart
** Last update Fri Jan 15 19:31:04 2016 valentin brassart
*/

int	my_str_isalphanum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	i = i + 1;
      else if (str[i] >= 'a' && str[i] <= 'z')
	i = i + 1;
      else if (str[i] >= 'A' && str[i] <= 'Z')
	i = i + 1;
      else if (str[i] == '_')
	i = i + 1;
      else
	return (0);
    }
  return (1);
}
