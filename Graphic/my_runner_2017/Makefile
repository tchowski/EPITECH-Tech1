##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	SRC/screen.c	\
		SRC/main.c		\
		SRC/print_message.c	\
		SRC/display_fonc.c	\
		SRC/my_putchar.c	\
		SRC/my_putstr.c		\
		SRC/destroy.c		\
		SRC/stats.c		\
		SRC/sound.c		\
		SRC/clock.c		\
		SRC/textsprite.c	\
		SRC/repeat.c		\
		SRC/window.c		\
		SRC/render.c

OBJ=            $(SRC:.c=.o)

NAME=           my_runner

all:            $(NAME)

##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ) -l c_graph_prog

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
