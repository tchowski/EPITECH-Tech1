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
		SRC/textsprite.c	\
		SRC/render.c		\
		SRC/my_set_pos.c	\
		SRC/prep_food.c		\
		SRC/check_food.c	\
		SRC/sound.c		\
		SRC/window.c		\
		SRC/clock.c

OBJ=            $(SRC:.c=.o)

NAME=           my_cook

all:            $(NAME)

##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ) -l c_graph_prog -g3

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
