##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=            rush2.c		\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putfloat.c

OBJ=            $(SRC:.c=.o)

NAME=           rush2

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all
