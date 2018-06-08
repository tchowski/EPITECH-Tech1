#ifndef SKILL_TREE_H_
#define SKILL_TREE_H_

#include <SFML/Graphics.h>

typedef struct
{
	sfBool learned_skills[10];
	int equiped_skills[4];
} s_skills;

s_skills s_skill_empty();

#endif