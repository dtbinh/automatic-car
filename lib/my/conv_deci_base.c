/*
** conv_deci_base.c for conv_deci_base in /home/brassa_v/epitech/PSU/PSU_2015_minitalk/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Thu Feb  4 16:04:03 2016 valentin brassart
** Last update Tue Apr 26 14:48:23 2016 valentin brassart
*/

#include 	<stdlib.h>
#include	"my.h"

char		*conv_deci_base(char nb, int base)
{
  char		*resultat;
  char		dividende;
  int		i;

  i = 0;
  dividende = nb;
  resultat = my_malloc(nb);
  while (dividende != 0)
    {
      resultat[i] = dividende % base;
      i++;
      dividende = dividende / base;
    }
  resultat[i] = -1;
  resultat = my_revchar(resultat);
  return (resultat);
}
