##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CFLAGS += -I./includes/
EXEC=generator
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

generator: $(OBJ)
	$(CC) -g3 -o $@ $^ $(LDFLAGS)

re: fclean all

%.o: %.c
	$(CC) -g3 -o $@ -c $< $(CFLAGS)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(EXEC)

.PHONY: clean fclean
