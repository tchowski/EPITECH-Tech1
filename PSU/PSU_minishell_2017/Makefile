##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	main.c	\
		display.c \
		error_84.c	\
		dir.c	\
		my_cut_str.c	\

OBJ=            $(SRC:.c=.o)

NAME=           mysh

##INCLUDE = 	-Iinclude

LDFLAGS = 	-Llib -lmy

##CFLAGS = 	Iinclude

CC =		gcc

RM =		rm

.c.o :
	$(CC) -c $(CFLAGS) $<

all:           	libmy $(NAME)

libmy :
	make -C./lib/

$(NAME):        $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) libgnl.a

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)
		make -Clib fclean

re:             fclean all

.PHONY:		fclean all re clean
