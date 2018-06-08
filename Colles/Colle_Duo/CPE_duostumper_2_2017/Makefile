##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=		./src/main.c			\
		./src/error.c			\
		./src/change_weight_height.c	\
		./src/change_win_ply_char.c	\
		./src/test_flags_redirect.c	\
		./src/show_game.c		\
		./src/game_play.c		\
		./src/put_coin.c		\
		./src/get_next_line.c

OBJ=		$(SRC:.c=.o)

NAME=		connect4

CC=		gcc

CFLAGS=		-Wall -Wextra -I ./include/

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBFLAGS)

clean:
		rm -rf $(OBJ)

fclean: 	clean
		rm -rf $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
