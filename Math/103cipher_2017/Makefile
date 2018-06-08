##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

##CFLAGS = -Wall -Wextra

SRC=      	main.c	\

OBJ=            $(SRC:.c=.o)

NAME=           103cipher

all:            $(NAME)

##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
