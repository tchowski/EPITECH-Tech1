##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

## CFLAGS = -Wall -W -Wextra -Werror

SRC=      	my_printf.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_putcharchar.c	\
		my_put_nbr_base_oct.c \
		my_put_nbr_base_bi.c	\
		my_put_nbr_base_hex.c	\
		my_strlen_oct.c	\
		my_revstr.c	\
		my_put_nbr_base_unsigned.c	\
		my_ptr_print.c	\
		my_put_adress.c	\
		my_atoi.c	\
		my_power.c	\
		my_strlen.c

OBJ=            $(SRC:.c=.o)

NAME=           libmy.a

all:            $(NAME)

$(NAME):        $(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:		fclean all re clean
