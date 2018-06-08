/*
** EPITECH PROJECT, 2017
** mylist.h
** File description:
** mylist
*/

typedef struct linked_list
{
	void *data;
	struct linked_list *next;
} linked_list_t;

int	my_put_in_list(struct linked_list **list, char * const *av);
void	my_show_list(struct linked_list *list);
