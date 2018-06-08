##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	SRC/main.c	\
		SRC/my_strcmp.c	\
		SRC/switch_fonct.c	\
		SRC/fonctions_check.c	\

OBJ=            $(SRC:.c=.o)

NAME=           ./108trigo

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc -g -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
