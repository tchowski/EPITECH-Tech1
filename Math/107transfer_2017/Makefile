##
## EPITECH PROJECT, 2017
##
## File description:
## Makefile
##

NAME	=	107transfer

SRC	=	SRC/main.c	\
		SRC/fonctionschecks.c	\
		SRC/fonctionscalcs.c	\
		SRC/str_to_space.c	\
		SRC/my_strncpy.c	\

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

RM	=	rm -f

LIB	=	-L./lib/my -lmy

FLAG	=	-Wall -Werror -Wextra -g

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) $(FLAG) -o $(NAME) $(OBJ) $(LIB)

clean:
	make clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean all re
