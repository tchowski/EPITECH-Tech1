##
## EPITECH PROJECT, 2017
## BSQ
## File description:
## Makefile
##

NAME	=	libmy.a

SRC	=	my_putchar.c	\
		my_get_nbr.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_strcat.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_strlen.c	\
		affichage.c	\
		my_printf.c	\

OBJ	=	$(SRC:.c=.o)

ARRC	=	ar rc

RM	=	rm -f

all:	$(NAME)

$(NAME):	$(OBJ)
	$(ARRC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean all re
