##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	SRC/main.c	\
		SRC/my_putchar.c	\
		SRC/my_putstr.c	\
		SRC/str.c	\
		SRC/error.c	\
		SRC/open_map_player_1.c	\
		SRC/open_map_player_2.c	\
		SRC/get_pid_player_1.c	\
		SRC/get_pid_player_2.c	\
		SRC/my_put_nbr.c		\
		SRC/my_atoi.c		\
		SRC/str_to_point.c		\
		SRC/str_to_space.c		\
		SRC/my_strncpy.c		\
		SRC/error_pathfile.c	\
		SRC/display_path.c		\
		SRC/cut.c			\
		SRC/my_malloc.c		\
		SRC/print_usage.c		\
		SRC/game.c			\
		SRC/my_strcat.c

OBJ=            $(SRC:.c=.o)

NAME=           navy

all:            $(NAME)

##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
		gcc -g -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
