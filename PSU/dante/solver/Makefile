##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##

CFLAGS += -I./includes/
EXEC=solver
SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o)

all: $(EXEC)

solver: $(OBJ)
	@$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(EXEC)

re: fclean all
.PHONY: clean mrproper
