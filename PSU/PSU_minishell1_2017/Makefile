##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##


NAME=           mysh

SRCS=      	main.c	\
		str_to_space.c \
		str_to_array.c	\
		my_strncmp.c	\
		my_strcmp.c	\
		my_putstr.c	\
		my_putchar.c	\
		my_strncpy.c	\
		my_strcat.c	\
		builtin.c	\
		display_path.c	\
		my_wait_dat.c	\
		error.c		\
		my_strcpy.c	\
		my_setenv.c	\
		my_unsetenv.c	\
		tabs_space.c	\
		comma.c		\
		str_to_comma.c	\
		env_setup.c

OBJS=            $(SRCS:.c=.o)
CFLAGS += -Wall -Wextra
LDFLAGS = libgnl.a
CC = gcc
RM = rm -rf


all:            $(NAME)

$(NAME):        $(OBJS)
	$(CC) -g -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(RM) $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
