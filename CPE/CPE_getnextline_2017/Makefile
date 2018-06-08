##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##


NAME=           gnl

SRCS=      	get_next_line.c	\
		my_putstr.c	\
		my_putchar.c	\

OBJS=            $(SRCS:.c=.o)
##CFLAGS = -Wall -Wextra
##LDFLAGS = -lcriterion
CC = gcc
##RM = rm -rf
MAKE = make

all:            $(NAME)

$(NAME):        $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

tests: all
	$(MAKE) -C ./tests/ fclean
	$(MAKE) -C ./tests/
	$(MAKE) -C ./tests/ run

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(MAKE) -C ./tests/ fclean
		$(RM) $(NAME)

re:             fclean all

.PHONY:		fclean all re tests
