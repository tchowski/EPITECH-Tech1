##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

SRC=      	my_ls.c	\
		all_files_hidden.c \
		aff_nom.c	\
		files_recu.c	\
		print_long.c	\
		aff_only_one.c

OBJ=            $(SRC:.c=.o)

NAME=           my_ls

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
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)
		make -Clib fclean

re:             fclean all

.PHONY:		fclean all re clean
