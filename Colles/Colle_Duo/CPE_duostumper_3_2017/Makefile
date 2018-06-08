##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=		./src/main.c		\
		./src/open_file.c

OBJ=		$(SRC:.c=.o)

NAME=		cesar

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

debug:		$(NAME)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LIBFLAGS) -g3

.PHONY:		all clean fclean re
