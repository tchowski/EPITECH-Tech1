#ifndef ITEM_H_
#define ITEM_H_

#include <SFML/Graphics.h>
#include "defines.h"

typedef struct
{
	int id;
	sfUint32 *name;
	int type;
	int value;
} item;

extern const item item_list[N_ITEMS];

item *item_create(int id);
void item_destroy(item *this);

#endif