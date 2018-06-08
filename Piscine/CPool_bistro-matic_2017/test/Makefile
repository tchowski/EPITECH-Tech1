SRC=		../test_my_bistro.c	\
		../my_put_nbr.c		\
		../eval_expr.c		\
		../infin_add.c


OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra --coverage

LDFLAGS=	-lcriterion

NAME=		units

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

