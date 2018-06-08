##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	main.c	\
		bubble_sort.c	\
		my_swap.c	\
		number.c	\
		my_putchar.c	\
		my_putstr.c	\
		print_result.c

OBJ=            $(SRC:.c=.o)

NAME=           push_swap

all:            $(NAME)

##LIB = 		-lmy -L.

$(NAME):        $(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
