/*
** EPITECH PROJECT, 2018
** single_to_double_array
** File description:
** double_array
*/
#include "n4s.h"

char *stralloc(int size)
{
        char *str = malloc(sizeof(char) * (size + 1));

        if (!str)
                return (NULL);
        return (str);
}

char **strstralloc(int size)
{
        char **str = malloc(sizeof(char *) * (size + 1));

        if (!str)
                return (NULL);
        return (str);
}

int nb_of_word(char *str)
{
	int nb = 0;

	if (!str || str[0] == '\0')
		return (0);
	for (int i = 0; str[i]; i++)
		str[i] == ':' ? nb++ : 0;
	return (++nb);
}

char **str_to_array(char *str)
{
	char **dbl = NULL;
	int size = strlen(str);
	int line = nb_of_word(str);
	int i = 0;

	dbl = strstralloc(line);
	for (int all = 0, j = 0; i != line; i++, all++) {
		dbl[i] = stralloc(size);
		for (j = 0; str[all] != ':' && str[all]; j++, all++)
			dbl[i][j] = str[all];
		dbl[i][j] = '\0';
	}
	dbl[i] = NULL;
	return (dbl);
}
