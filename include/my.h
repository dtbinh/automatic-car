/*
** my.h for my in /home/brassa_v/rendu/Piscine_C_J09/ex_01
**
** Made by valentin brassart
** Login   <brassa_v@epitech.net>
**
** Started on  Thu Oct  8 15:37:54 2015 valentin brassart
** Last update Sun May 29 21:01:51 2016 jauber_e
*/

#ifndef		MY_H_
# define	MY_H_

# include	<stdarg.h>

typedef struct	s_lidar
{
  char		*info_lidar;
  char		**nbrs;
  int		left;
  int		middle_left;
  int		middle;
  int		middle_right;
  int		right;
  float		speed;
  float		wheels;
  char		*forward;
  char		*backwards;
  char		*wheel;
}		t_lidar;

void		my_putchar(char c);
void		my_putstr(char *str);
void		my_puterror(char *str);
void		emalloc();
void		free_tab(char **tab);
void		print_tab(char **tab);
void		disp_stdargprint(int i, char *str, va_list va);
char		conv_base_deci(char *nb, int base);
char		*my_malloc(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *src, int nb);
char		*my_revstr(char *str);
char		*my_strcat(char *dest, char *src);
char		*my_strcat_malloc(char *dest, char *src);
char		*my_strcpy_malloc(char *src);
char		*conv_deci_base(char nb, int base);
char		*my_revchar(char *str);
char		*get_next_line(const int fd);
char		**my_malloc_tab(int nb);
char		**my_revarg(int ac, char **av);
char		**my_str_to_wordtab(char *str, char c, char c2);
int		char_to_int_deci(char i);
int		my_put_nbr(int nb);
int		my_strlen(char *str);
int		my_str_isnum(char *str);
int		my_getnbr(char *nbr);
int		my_strcmp(char *s1, char *s2);
int		sum_stdarg(int i, int nb, ...);
int		disp_stdarg(char *s, ...);
int		my_put_nbr_base(unsigned int nb, char *base);
int		my_str_isnum_dot_neg(char *str);
int		my_printf(char *str, ...);
int		my_strncmp(char *s1, char *s2, int n);
int		my_str_isalphanum(char *str);
int		my_tablen(char **tab);
int		my_str_isnum_neg(char *str);
unsigned int	my_strlenunsign(char *str);
char		*my_ftoa(double nb);
void		forward(float nb, t_lidar *);
void		backwards(float nb, t_lidar *);
void		wheels(float nb, t_lidar *);
void		go_back(t_lidar *lidar);
void		my_wait(t_lidar *lidar);
char		*my_strstr(char *, char *);

#endif
