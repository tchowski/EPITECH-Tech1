##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	main_screen.c	\
		main.c		\
		textsprite.c	\
		prep_food.c	\
		my_set_pos.c	\
		print_message.c	\
		display_fonc.c	\
		my_putchar.c	\
		my_putstr.c	\
		destroy.c	\
		render.c	\
		check_food.c	\
		stats.c

OBJ=            $(SRC:.c=.o)

NAME=           my_cook

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
