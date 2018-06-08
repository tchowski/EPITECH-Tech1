DSRC	=	src

SRC	=	$(DSRC)/main.c	\
		$(DSRC)/main_menu.c	\
		$(DSRC)/main_menu_run.c	\
		$(DSRC)/window_run.c	\
		$(DSRC)/window.c	\
		$(DSRC)/game.c	\
		$(DSRC)/game_run.c	\
		$(DSRC)/matrix.c	\
		$(DSRC)/sfml_functions.c	\
		$(DSRC)/sfml_functions_time.c	\
		$(DSRC)/my_maths.c	\
		$(DSRC)/character.c	\
		$(DSRC)/commands.c	\
		$(DSRC)/player_update.c	\
		$(DSRC)/condition_struct.c	\
		$(DSRC)/keyboard.c	\
		$(DSRC)/mouse_update.c	\
		$(DSRC)/update_info.c	\
		$(DSRC)/level.c	\
		$(DSRC)/tiles.c	\
		$(DSRC)/level_update.c	\
		$(DSRC)/collisions.c	\
		$(DSRC)/collision_rect.c	\
		$(DSRC)/chunk.c	\
		$(DSRC)/chunk_matrix.c	\
		$(DSRC)/chunk_matrix_update.c	\
		$(DSRC)/rc_lib.c	\
		$(DSRC)/get_case_value.c	\
		$(DSRC)/mini_lib.c	\
		$(DSRC)/mini_lib_2.c	\
		$(DSRC)/collision_round_corner.c	\
		$(DSRC)/button.c	\
		$(DSRC)/button_update.c	\
		$(DSRC)/main_menu_buttons.c	\
		$(DSRC)/sfml_vector_convert.c	\
		$(DSRC)/get_level_file_path.c	\
		$(DSRC)/update_loaded_chunks.c	\
		$(DSRC)/chunks_loading.c	\
		$(DSRC)/gui.c	\
		$(DSRC)/bar.c	\
		$(DSRC)/gui_cd_area.c	\
		$(DSRC)/gui_update.c	\
		$(DSRC)/console.c	\
		$(DSRC)/console_update.c	\
		$(DSRC)/console_enter.c	\
		$(DSRC)/console_write_output.c	\
		$(DSRC)/debug.c	\
		$(DSRC)/console_strcmp.c	\
		$(DSRC)/console_var_debug.c	\
		$(DSRC)/console_struct.c	\
		$(DSRC)/str_to_unicode.c	\
		$(DSRC)/menu.c	\
		$(DSRC)/game_render.c	\
		$(DSRC)/level_render.c	\
		$(DSRC)/inventory_list.c	\
		$(DSRC)/inventory_list_update.c	\
		$(DSRC)/inventory_list_update_2.c	\
		$(DSRC)/menu_loading.c	\
		$(DSRC)/menu_update.c	\
		$(DSRC)/inventory.c	\
		$(DSRC)/item.c	\
		$(DSRC)/inventory_update.c	\
		$(DSRC)/menu_load_functions.c	\
		$(DSRC)/item_list.c	\
		$(DSRC)/menu_list.c	\
		$(DSRC)/equiped_items.c	\
		$(DSRC)/equiped_items_display.c	\
		$(DSRC)/equiped_items_update.c	\
		$(DSRC)/menu_update_functions.c	\
		$(DSRC)/skills.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

INCLUDE	=	-Iinclude

LDFLAGS	=	-lc_graph_prog -lm

CFLAGS	=	-Iinclude -g

CC	=	gcc

RM	=	rm

all: $(NAME)


$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(INCLUDE) $(LDFLAGS)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
