/*
** printf.c for printf in /home/brassav/epitech/PSU/PSU_2015_my_printf
**
** Made by brassa_v
** Login   <Brassart Valentin@epitech.net>
**
** Started on  Thu Nov  5 16:50:09 2015 brassa_v
** Last update Tue Apr 19 13:53:32 2016 valentin brassart
*/

#include	<stdarg.h>
#include	"my.h"

int		my_printf(char *str, ...)
{
  va_list	va;
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  va_start(va, str);
  while (str[i] != '\0')
    {
      if (str[i] == '%')
	{
	  nb++;
	  i++;
	  disp_stdargprint(i, str, va);
	  i++;
	}
      my_putchar(str[i]);
      i++;
    }
  va_end(va);
  return (0);
}
