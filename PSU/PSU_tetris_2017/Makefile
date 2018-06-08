##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CC=		gcc -lncurses -g3

SRC=      	main.c	\
		my_putchar.c	\
		my_putstr.c	\
		print_usage.c	\
		my_strstr.c	\
		my_strcmp.c	\
		file.c		\
		display_path.c	\
		my_strcat.c	\
		str.c		\
		lib.c

OBJ=            $(SRC:.c=.o)

NAME=           tetris

all:            $(NAME)

$(NAME):        $(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
