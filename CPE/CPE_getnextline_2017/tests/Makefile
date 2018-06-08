##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##


NAME=           tests

SRCS=      	../get_next_line.c	\
		../my_putstr.c		\
		../my_putchar.c		\
		test.c

OBJS=            $(SRCS:.c=.o)
##CFLAGS = -Wall -Wextra
LDFLAGS += -lcriterion
CC = gcc
RM = rm -rf

all:            $(NAME)

$(NAME):        $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(NAME)

run:
	@ ./$(NAME) --verbose

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(RM) $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
