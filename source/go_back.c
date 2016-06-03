/*
** go_back.c for go_back in /home/henryl/CPE_2015_n4s/source
** 
** Made by Louis Henry
** Login   <henry_l@epitech.eu>
** 
** Started on  Thu May 26 15:23:56 2016 Louis Henry
** Last update Sun May 29 15:58:42 2016 brassa_v
*/

#include		"my.h"

void			go_back(t_lidar *lidar)
{
  int			nb;
  float			last_wheels;

  nb = 0;
  if ((lidar->left <= 50) || (lidar->right <= 50))
    nb++;
  if ((lidar->middle <= 50) ||
      (lidar->middle_right <= 50) || (lidar->middle_left <= 50))
    nb++;
  if (nb > 0)
    {
      last_wheels = lidar->wheels;
      if (lidar->wheels >= 0)
	lidar->wheels = -1;
      else
	lidar->wheels = 1;
      wheels(lidar->wheels, lidar);
      backwards(lidar->speed, lidar);
      my_wait(lidar);
      lidar->wheels = last_wheels;
      wheels(lidar->wheels, lidar);
    }
}
