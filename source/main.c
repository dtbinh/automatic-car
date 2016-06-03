/*
** main.c for main in /home/jaubere/projets/CPE_2015_n4s/source
**
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
**
** Started on  Tue May 10 11:23:38 2016 jauber_e
** Last update Sun May 29 21:00:19 2016 jauber_e
*/

#include	<unistd.h>
#include	"my.h"

void		init_data(t_lidar *lidar)
{
  write(1, "get_info_lidar\n", 15);
  lidar->info_lidar = get_next_line(0);
  lidar->nbrs = my_str_to_wordtab(lidar->info_lidar, ':', 0);
  lidar->left = my_getnbr(lidar->nbrs[3]);
  lidar->middle_left = my_getnbr(lidar->nbrs[12]);
  lidar->middle = my_getnbr(lidar->nbrs[16]);
  lidar->middle_right = my_getnbr(lidar->nbrs[20]);
  lidar->right = my_getnbr(lidar->nbrs[34]);
}

void		change_speed(t_lidar *lidar)
{
  lidar->wheels = 0;
  wheels(lidar->wheels, lidar);
  if (lidar->speed < 0.6 && lidar->middle > 1800)
    lidar->speed += 0.1;
  else if (lidar->speed > 0.3 && lidar->middle < 1800)
    lidar->speed -= 0.1;
  forward(lidar->speed, lidar);
}

void		turn(t_lidar *lidar)
{
  if (lidar->left - lidar->right > 0 && lidar->middle_right <= 700)
    {
      if (lidar->wheels + 0.1 <= 0.4)
	lidar->wheels += 0.1;
      wheels(lidar->wheels, lidar);
      if (lidar->speed - 0.1 >= 0.2)
	lidar->speed -= 0.1;
      forward(lidar->speed, lidar);
    }
  else if (lidar->left - lidar->right < 0 && lidar->middle_left <= 700)
    {
      if (lidar->wheels - 0.1 >= -0.4)
	lidar->wheels -= 0.1;
      wheels(lidar->wheels, lidar);
      if (lidar->speed - 0.1 >= 0.2)
	lidar->speed -= 0.1;
      forward(lidar->speed, lidar);
    }
  else
    change_speed(lidar);
}

void		checkpoint(t_lidar *lidar, int *i)
{
  init_data(lidar);
  if (my_strstr(lidar->info_lidar, "Track Cleared") != NULL ||
      my_strstr(lidar->forward, "Track Cleared") != NULL ||
      my_strstr(lidar->backwards, "Track Cleared") != NULL ||
      my_strstr(lidar->wheel, "Track Cleared") != NULL)
    *i = 1;
  turn(lidar);
}

int		main()
{
  t_lidar	lidar;
  int		i;

  i = 0;
  lidar.speed = 0.3;
  lidar.wheels = 0;
  write(1, "start_simulation\n", 17);
  lidar.forward = get_next_line(0);
  lidar.backwards = lidar.forward;
  lidar.wheel = lidar.forward;
  forward(lidar.speed, &lidar);
  while (i == 0)
    checkpoint(&lidar, &i);
  forward(0, &lidar);
  write(1, "stop_simulation\n", 16);
  return (0);
}
