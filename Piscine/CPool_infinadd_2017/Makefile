##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=            main.c		\
		my_putchar.c	\
		number.c	\
		my_put_nbr.c	\



OBJ=            $(SRC:.c=.o)

NAME=		infin_add

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all
