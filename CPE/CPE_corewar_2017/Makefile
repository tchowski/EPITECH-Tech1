##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Standard makefile for epitech projects
##

CC	=	gcc

CFLAGS	+=	-Wall -Wextra -Werror -g3

CFLAGS  +=	-I./include

####### COREWAR-VM #######
VMBIN	=	./corewar/corewar

VMSRC	=	src/vm/main.c		\
		src/vm/check_args.c	\
		src/lib/my_putstr.c	\
		src/lib/my_strncmp.c	\
		src/lib/my_strlen.c

VMOBJ	=	$(VMSRC:.c=.o)
########## ASM ##########
ASMBIN	=	./asm/asm

ASMSRC	=	src/asm/main.c			\
		src/asm/check.c			\
		src/asm/create_cor_file.c	\
		src/asm/header.c		\
		src/asm/parser.c		\
		src/lib/my_gnl.c		\
		src/lib/my_strlen.c		\
		src/lib/my_strcat.c		\
		src/lib/my_strcpy.c		\
		src/lib/my_strdup.c		\
		src/lib/my_putstr.c		\
		src/lib/my_putchar.c		\
		src/lib/my_put_nbr.c		\
		src/lib/file_exists.c		\
		src/lib/my_strncmp.c		\
		src/lib/my_strcmp.c

ASMOBJ	=	$(ASMSRC:.c=.o)

all: corewar asm

corewar: $(VMOBJ)
	$(CC) $(CFLAGS) -o $(VMBIN) $(VMOBJ)

asm: $(ASMOBJ)
	$(CC) $(CFLAGS) -o $(ASMBIN) $(ASMOBJ)

clean:
	rm -f src/vm/*.o
	rm -f src/asm/*.o
	rm -f src/lib/*.o
	rm -f vgcore*

fclean: clean
	rm -f $(ASMBIN)
	rm -f $(VMBIN)

re:	fclean all

.PHONY:	fclean re clean	all libmy asm corewar
