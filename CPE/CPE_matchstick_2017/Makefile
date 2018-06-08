##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	src/main.c	\
		src/my_putchar.c	\
		src/my_putstr.c	\
		src/print_game_board.c	\
		src/str.c	\
		src/my_atoi.c	\
		src/display_path.c	\
		src/str_to_space.c	\
		src/my_strncpy.c	\
		src/display_str_1.c	\
		src/player.c	\
		src/my_strcmp.c	\
		src/my_put_nbr.c	\
		src/display_str_2.c	\
		src/check_win.c	\
		src/count.c	\
		src/ai_turn.c	\
		src/get_next_line.c

OBJ=            $(SRC:.c=.o)

NAME=           matchstick

all:            $(NAME)
CC = gcc -g
##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -Wall -Wextra

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
