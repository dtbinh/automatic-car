/*
** my_putchar.c for my_putchar in /home/brassa_v/rendu/Piscine_C_J07
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Tue Oct  6 10:48:53 2015 valentin brassart
** Last update Mon Feb  8 16:58:17 2016 valentin brassart
*/

#include	<unistd.h>

void		my_putchar(char c)
{
  write(1, &c, 1);
}
