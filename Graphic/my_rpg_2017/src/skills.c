#include "skills.h"

s_skills s_skill_empty()
{
	s_skills new;

	for (int i = 0; i < 10; i++) {
		new.learned_skills[i] = sfFalse;
	}
	for (int i = 0; i < 4; i++) {
		new.equiped_skills[i] = -1;
	}
	return new;
}