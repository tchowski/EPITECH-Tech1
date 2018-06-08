##)
## EPITECH PROJECT, 2017
## Makefile
## File description:
## compile 101pong
##

SRCPATH	= 	SRC

SRC	=	$(SRCPATH)/main.c	\

CC	=	gcc

CFLAGS	=	-Wall -W

OBJ	=	$(SRC:.c=.o)

NAME	=	101pong

#LIB	=	my

#LIBPATH	=	./lib/my

all :	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -lmath #-L$(LIBPATH) -l$(LIB)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
