/*
** write.c for write in /home/brassa_v/epitech/CPE/CPE_2015_n4s/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Tue May 10 11:28:05 2016 valentin brassart
** Last update Sat May 28 18:11:58 2016 brassa_v
*/

#include	<unistd.h>
#include	"my.h"

void		forward(float nb, t_lidar *lidar)
{
  char		*str;

  str = my_ftoa(nb);
  write(1, "car_forward:", 12);
  write(1, str, my_strlen(str));
  write(1, "\n", 1);
  lidar->forward = get_next_line(0);
}

void		backwards(float nb, t_lidar *lidar)
{
  char		*str;

  str = my_ftoa(nb);
  write(1, "car_backwards:", 14);
  write(1, str, my_strlen(str));
  write(1, "\n", 1);
  lidar->backwards = get_next_line(0);
}

void		wheels(float nb, t_lidar *lidar)
{
  char		*str;

  str = my_ftoa(nb);
  write(1, "wheels_dir:", 11);
  write(1, str, my_strlen(str));
  write(1, "\n", 1);
  lidar->wheel = get_next_line(0);
}

void		my_wait(t_lidar *lidar)
{
  write(1, "cycle_wait:6\n", 13);
  lidar->wheel = get_next_line(0);
}
