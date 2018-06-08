##
## EPITECH PROJECT, 2017
## makefile
## File description:
## 42sh
##

SRC	=	main.c	\

OBJ	=	$(SRC:.c=.o)

DIR	=	src

NAME	=	42sh

CC	=	gcc

CPPFLAGS	=	-Iinclude

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	rm -f $(OBJ)

fclean:clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all re clean
