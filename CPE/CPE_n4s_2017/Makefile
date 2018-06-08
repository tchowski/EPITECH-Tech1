##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	src/main.c	\
			src/my_putchar.c	\
			src/my_putstr.c		\
			src/get_next_line.c	\
			src/str_to_array.c	\
			src/my_strncpy.c	\
			src/display_path.c	\
			src/condition.c		\

OBJ=            $(SRC:.c=.o)

NAME=           ai

all:            $(NAME)
CC = gcc -g3
CPPFLAGS += -I ./include
CFLAGS = -Wall -Wextra

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
