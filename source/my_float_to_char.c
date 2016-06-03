/*
** main.c for main in /home/henryl
** 
** Made by Louis Henry
** Login   <henry_l@epitech.eu>
** 
** Started on  Tue May 10 14:53:44 2016 Louis Henry
** Last update Tue May 10 16:17:27 2016 jauber_e
*/

#include		<unistd.h>
#include		<stdio.h>
#include		<stdlib.h>

int			check_nb(double nb)
{
  int			compt;

  compt = nb;
  nb = (nb / 2 * 2);
  if (compt == nb)
    return (1);
  return (0);
}

char			*float_to_char(char *str, double nb)
{
  int			res;

  res  = nb * 10;
  res = res % 10;
  if (nb < 0)
    {
      res = res * (-1);
      str[0] = '-';
      str[1] = 48;
      str[2] = '.';
      str[3] = res + 48;
      str[4] = 0;
      return (str);
    }
  str[0] = 48;
  str[1] = '.';
  str[2] = res + 48;
  str[3] = 0;
  return (str);
}

char			*my_ftoa(double nb)
{
  char			*str;

  if ((str = malloc(sizeof(char) * 6)) == NULL)
    return (NULL);
  if (check_nb(nb) == 1)
    {
      if (nb < 0)
	{
	  str[0] = '-';
	  str[1] = nb + 48;
	  str[2] = 0;
	  return (str);
	}
      str[0] = nb + 48;
      str[1] = 0;
      return (str);
    }
  str = float_to_char(str, nb);
  return (str);
}
