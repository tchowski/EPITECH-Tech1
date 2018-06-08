##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=           main.c		\
	       eval_expr.c	\
	       my_atoi.c	\
	       my_put_nbr.c	\
	       my_strlen.c	\
	       my_putstr.c



OBJ=            $(SRC:.c=.o)

NAME=           calc

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
