##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=           main.c		\
	       eval_expr.c	\
	       my_put_nbr.c	\
	       my_putchar.c	\
	       strtol.c


OBJ=            $(SRC:.c=.o)

NAME=           eval_expr

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all
