/*
** impasse.c for impasse in /home/jaubere/Bureau/all/projets/CPE_2015_n4s/source
** 
** Made by jauber_e
** Login   <Jaubert Elise@epitech.net>
** 
** Started on  Thu May 26 17:39:55 2016 jauber_e
** Last update Sun May 29 21:01:17 2016 jauber_e
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"

void		stop_move(t_lidar *lidar, int count, int *stop)
{
  if (count == 32 && lidar->wheels == 0 &&
      (lidar->left - lidar->right > 500 ||
       lidar->left - lidar->right < 500))
    {
      if (lidar->speed > 0.3)
	{
	  lidar->speed -= 0.1;
	  forward(lidar->speed, lidar);
	}
      *stop += 1;
    }
  else
    *stop = 0;
  if (count == 32 && *stop >= 4)
    {
      forward(0, lidar);
      write(1, "stop_simulation\n", 16);
    }
}

void		impasse(t_lidar *lidar)
{
  int		i;
  int		count;
  static int	stop = 0;

  i = 3;
  count = 0;
  while (i <= 34)
    {
      if (lidar->speed > 0.2)
	{
	  if (i >= 14 && i <= 18)
	    {
	      if (my_getnbr(lidar->nbrs[i]) < 1050)
		count++;
	    }
	  else
	    if (my_getnbr(lidar->nbrs[i]) < 1150)
	      count++;
	}
      i++;
    }
  stop_move(lidar, count, &stop);
}

