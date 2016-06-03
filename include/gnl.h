/*
** gnl.h for gnl in /home/brassa_v/epitech/PSU/PSU_2015_minishell2/include/
**
** Made by valentin brassart
** Login   <brassa_v@epitech.eu>
**
** Started on  Thu Apr 14 11:25:28 2016 valentin brassart
** Last update Sun May 29 16:49:11 2016 valentin brassart
*/

#ifndef		MY_GNL_
# define	MY_GNL_
#ifndef		READ_SIZE
# define	READ_SIZE (10)
#endif

typedef struct	s_get
{
  char		*buf;
  char		*final;
  int		i;
  int		tour;
  int		fin;
  int		nb_read;
}		t_get;

char		*get_next_line(const int fd);

#endif
