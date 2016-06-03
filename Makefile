##
## Makefile for makefile in /home/brassav/epitech/lightning_2020
##
## Made by brassa_v
## Login   <Brassart Valentin@epitech.net>
##
## Started on  Tue Nov 10 09:13:38 2015 brassa_v
## Last update Sun May 29 20:26:53 2016 jauber_e
##

SRC	=	source/main.c \
		source/write.c \
		source/my_float_to_char.c \
		source/go_back.c \
		source/impasse.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-W \
		-Wall \
		-Wextra \
		-I include

NAME	=	ia

RM	=	rm -f

all	:	liba $(NAME)

liba	:
		@make -C ./lib/my

libc	:
		@make clean -C ./lib/my

libf	:
		@make fclean -C ./lib/my

$(NAME)	:	$(OBJ)
		gcc -o $(NAME) $(OBJ) -lmy -Llib/my

clean	:	libc
		$(RM) *~
		$(RM) $(OBJ)
		$(RM) *#

fclean	:	libf clean
		$(RM) $(NAME)

re	:	libf fclean all
