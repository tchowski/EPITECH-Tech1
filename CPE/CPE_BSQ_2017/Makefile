##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##


NAME=           bsq

SRCS=      	src/main.c	\
			src/calc.c	\
			src/my_malloc_double_tab.c	\
			src/my_tab.c	\
			src/setup_map.c	\
			src/my_malloc_double_char.c

OBJS=            $(SRCS:.c=.o)
CFLAGS += -Wall -Wextra
CPPFLAGS += -I ./include
CC = gcc -g3
RM = rm -rf

all:            $(NAME)

$(NAME):        $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:         clean
		$(RM) $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
