##)
## EPITECH PROJECT, 2017
## Makefile
## File description:
## compile 101pong
##

SRCPATH	= 	SRC

SRC	=	$(SRCPATH)/main.c		\
		$(SRCPATH)/my_strlen.c		\
		$(SRCPATH)/my_getnbr.c		\
		$(SRCPATH)/my_getnbr_float.c	\
		$(SRCPATH)/my_str_isnum.c 	\
		$(SRCPATH)/my_str_isnum_float.c	\
		$(SRCPATH)/pong.c		\
		$(SRCPATH)/vector_ops.c		\

CC	=	gcc

CFLAGS	=	-Wall -W

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

all :	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -lm

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
