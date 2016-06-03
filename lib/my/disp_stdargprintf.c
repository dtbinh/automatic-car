/*
** sum_stdarg for sum_stdarg in /home/brassav/epitech/PSU_2015_my_printf_bootstrap
**
** Made by brassa_v
** Login   <Brassart Valentin@epitech.net>
**
** Started on  Wed Nov  4 13:53:12 2015 brassa_v
** Last update Tue Apr 19 13:52:45 2016 valentin brassart
*/

#include	<stdarg.h>
#include	"my.h"

void		disp_stdargprintf2(int i, char *str, va_list va)
{
  char		*chaine;
  int		j;
  int		dec;

  j = 0;
  if (str[i] == 'S')
    {
      chaine = va_arg(va, char *);
      while (chaine[j] != '\0')
	{
	  if (chaine[j] >= 32 && chaine[j] < 127)
	    my_putchar(chaine[j]);
	  else
	    {
	      dec = char_to_int_deci(chaine[j]);
	      my_putchar('\\');
	      if (dec < 8)
		my_putstr("00");
	      else if (dec < 64)
		my_putchar('0');
	      my_put_nbr_base(dec, "01234567");
	    }
	  j++;
	}
    }
}

void		disp_stdargprint(int i, char *str, va_list va)
{
  if (str[i] == 'c')
    my_putchar(va_arg(va, int));
  if (str[i] == 's')
    my_putstr(va_arg(va, char *));
  if (str[i] == 'd' || str[i] == 'i')
    my_put_nbr(va_arg(va, int));
  if (str[i] == '%')
    my_putchar('%');
  if (str[i] == 'o')
    my_put_nbr_base(va_arg(va, unsigned int), "01234567");
  if (str[i] == 'u')
    my_put_nbr(va_arg(va, unsigned int));
  if (str[i] == 'X')
    my_put_nbr_base(va_arg(va, unsigned int), "0123456789ABCDEF");
  if (str[i] == 'x')
    my_put_nbr_base(va_arg(va, unsigned int), "0123456789abcdef");
  if (str[i] == 'b')
    my_put_nbr_base(va_arg(va, unsigned int), "01");
  disp_stdargprintf2(i, str, va);
}
