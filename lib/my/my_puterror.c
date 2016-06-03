/*
** test-my_putstr.c for my_putstr in /home/brassa_v/rendu/Piscine_C_J04/tests
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Thu Oct  1 19:00:36 2015 valentin brassart
** Last update Tue Apr 19 13:54:13 2016 valentin brassart
*/

#include	<unistd.h>
#include 	"my.h"

void		my_puterror(char *str)
{
  write(2, str, my_strlen(str));
}
