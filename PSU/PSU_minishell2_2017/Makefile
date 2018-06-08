##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##


NAME=           mysh

SRCS=      	src/main.c		\
		src/str_to_space.c 	\
		src/str_to_array.c	\
		src/my_strncmp.c	\
		src/my_strcmp.c		\
		src/my_putstr.c		\
		src/my_putchar.c	\
		src/my_strncpy.c	\
		src/my_strcat.c		\
		src/builtin.c		\
		src/display_path.c	\
		src/my_wait_dat.c	\
		src/error.c		\
		src/my_strcpy.c		\
		src/my_setenv.c		\
		src/my_unsetenv.c	\
		src/tabs_space.c	\
		src/comma.c		\
		src/str_to_comma.c	\
		src/env_setup.c		\
		src/setup_env.c		\
		src/str_to_pipe.c	\
		src/pipe.c

OBJS=            $(SRCS:.c=.o)
CFLAGS += -g3 -Wall -Wextra
CPPFLAGS += -I ./include
LDFLAGS = libgnl.a
CC = gcc
RM = rm -rf


all:            $(NAME)

$(NAME):        $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(RM) $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
