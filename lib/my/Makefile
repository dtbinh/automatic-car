##
## Makefile for makefile in /home/brassa_v/rendu/Piscine_C_J10/lib/my
##
## Made by valentin brassart
## Login   <brassa_v@epitech.net>
##
## Started on  Fri Oct  9 11:10:18 2015 valentin brassart
## Last update Sun May 29 16:50:49 2016 brassa_v
##

SRC	=	my_getnbr.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_strcpy.c \
		my_str_isnum.c \
		my_strlen.c \
		my_strncpy.c \
		my_strcat.c \
		my_strcmp.c \
		sum_stdarg.c \
		my_put_nbr_base.c \
		my_str_isnum_dot_neg.c \
		my_printf.c \
		disp_stdargprintf.c \
		my_str_to_wordtab.c \
		my_puterror.c \
		my_strncmp.c \
		my_str_isalphanum.c \
		my_tablen.c \
		my_str_isnum_neg.c \
		my_malloc.c \
		char_to_int_deci.c \
		conv_base_deci.c \
		conv_deci_base.c \
		my_strlenunsign.c \
		my_strcpy_malloc.c \
		my_strcat_malloc.c \
		get_next_line.c \
		free_tab.c \
		print_tab.c \
		my_malloc_tab.c \
		my_strstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall \
		-Wextra \
		-W \
		-I ../../include

LIB	=	libmy.a

RM	=	rm -f

all	:	$(LIB)

$(LIB)	:	$(OBJ)
		ar rc $(LIB) $(OBJ)
		ranlib $(LIB)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) $(LIB)

re: fclean all
