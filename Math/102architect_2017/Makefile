##
## EPITECH PROJECT, 2017
## FinalStumper
## File description:
## Makefile
##

SRC	=	main.cpp	\
		Vector2.cpp	\
		my_atoi.cpp	\
		my_power.cpp	\
		my_strlen.cpp	\
		Matrix.cpp	\
		view_fonc.cpp	\
		Matrix_calc.cpp	\
		vector_mat.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	102architect

INCLUDE	=	-Iinclude

LDFLAGS	=	-lm

CFLAGS	=	-Iinclude -g

CC	=	g++

RM	=	rm

.cpp.o:
	$(CC) -c $(CFLAGS) $<

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(INCLUDE) $(LDFLAGS)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
