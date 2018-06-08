##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

##CFLAGS = -Wall -Wextra

SRC=      	main.c	\
		print_map.c \
		display_fonc.c	\
		print_message.c	\
		my_putchar.c	\
		my_putstr.c	\
		my_strcat.c

OBJ=            $(SRC:.c=.o)

NAME=           my_sokoban

all:            $(NAME)

##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ) -lncurses

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
