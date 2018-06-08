##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	main.c	\
		my_putchar.c	\
		my_putstr.c	\
		display.c	\
		play.c		\
		str.c

OBJ=            $(SRC:.c=.o)

NAME=           palindrome

all:            $(NAME)

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
