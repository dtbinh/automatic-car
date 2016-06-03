/*
** sum_stdarg.c for sum_stdarg in /home/brassav/epitech/PSU_2015_my_printf_bootstrap/lib/my
**
** Made by brassa_v
** Login   <Brassart Valentin@epitech.net>
**
** Started on  Thu Nov  5 10:13:13 2015 brassa_v
** Last update Tue Apr 19 13:56:37 2016 valentin brassart
*/

#include	<stdarg.h>
#include	"my.h"

int		sum_stdarg(int i, int nb, ...)
{
  va_list	va;
  int		j;
  int		res;

  j = 0;
  res = 0;
  va_start(va, nb);
  if (i == 0)
    while (j < nb)
      {
	res = res + va_arg(va, int);
	j++;
      }
  if (i == 1)
    while (j < nb)
      {
	res = res + my_strlen(va_arg(va, char*));
	j++;
      }
  va_end(va);
  return (res);
}
