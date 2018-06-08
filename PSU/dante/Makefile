##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile
##


export CC=gcc
export CFLAGS= -Wall -Wextra -g3
export LDFLAGS=
SOLVER_DIR=solver
GENE_DIR=generator
EXEC=$(SOLVER_DIR)/solver && $(GENE_DIR)/generator

all: $(EXEC)

$(EXEC):
	@(cd $(SOLVER_DIR) && $(MAKE))
	@(cd $(GENE_DIR) && $(MAKE))
	@cp ./generator/generator ./tournament
	@cp ./solver/solver ./tournament

re:	fclean all
clean:
	@(cd $(SOLVER_DIR) && $(MAKE) $@)
	@(cd $(GENE_DIR) && $(MAKE) $@)
	@rm -f ./tournament/generator
	@rm -f ./tournament/solver

fclean: clean
	@(cd $(SOLVER_DIR) && $(MAKE) $@)
	@(cd $(GENE_DIR) && $(MAKE) $@)
	@rm -f ./tournament/generator
	@rm -f ./tournament/solver

.PHONY: clean fclean re clean $(EXEC)
