/*
** get_next_line.c for get_next_line in /home/brassav/epitech/CPE/CPE_2015_getnextline/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Tue Jan  5 11:53:39 2016 valentin brassart
** Last update Sun May 29 16:50:16 2016 valentin brassart
*/

#include	<stdio.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"my.h"
#include	"gnl.h"

char		*suppr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\n' && str[i] != 0)
    i++;
  if (str[i] == '\n')
    i++;
  str = str + i;
  return (str);
}

char		*ralloc(char *final, char *buffer, int tour)
{
  char		*tmp;

  tmp = my_malloc((READ_SIZE + 1) * (tour + 1));
  if (tmp == NULL)
    return (NULL);
  my_strcpy(tmp, final);
  free(final);
  final = my_malloc((READ_SIZE + 1) * (tour + 1));
  if (final == NULL)
    return (NULL);
  my_strcpy(final, tmp);
  free(tmp);
  if (buffer != NULL)
    my_strcat(final, buffer);
  free(buffer);
  return (final);
}

char		*read_line(t_get *struc, const int fd)
{
  if (struc->fin == 1 && struc->final[struc->i] == 0)
    {
      struc->buf = my_malloc((READ_SIZE + 1));
      if ((struc->nb_read = read(fd, struc->buf, READ_SIZE)) <= 0)
	struc->fin = 0;
      else
	struc->buf[READ_SIZE] = 0;
      struc->buf[struc->nb_read] = 0;
      struc->final = ralloc(struc->final, struc->buf, struc->tour);
      if (struc->final == NULL)
	return (NULL);
      if (struc->fin == 0 && struc->final[0] <= 0)
	{
	  free(struc->final);
	  return (NULL);
	}
    }
  return (struc->final);
}

char		*get_next_line(const int fd)
{
  t_get		struc;
  static char	*constante;

  struc.fin = 1;
  struc.i = 0;
  struc.tour = 1;
  if (fd < 0)
    return (NULL);
  struc.final = my_strcpy_malloc(constante);
  free(constante);
  while (struc.final[struc.i] != '\n' && struc.fin == 1)
    {
      while (struc.final[struc.i] != '\0' && struc.final[struc.i] != '\n')
	struc.i++;
      if (read_line(&struc, fd) == NULL)
	return (NULL);
      struc.i = 0;
      while (struc.final[struc.i] != '\0' && struc.final[struc.i] != '\n')
	struc.i++;
      struc.tour++;
    }
  constante = my_strcpy_malloc(suppr(struc.final));
  struc.final[struc.i] = '\0';
  return (struc.final);
}
