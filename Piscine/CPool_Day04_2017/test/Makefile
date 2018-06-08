
SRC=		test_my_strlen.c	\
		my_strlen.c

OBJ=		$(SRC:.c=.o)

CFLAGS=		-Wall -Wextra --coverage

LDFLAGS=	-lcriterion -lgcov

NAME=		units

all:		$(NAME)

$(NAME):	$(OBJ)
		cc -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

