#include <stdlib.h>
#include "level.h"
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

static void part_two(int x, int y, int i, char *path)
{
	int o = 0;
	char *buff = NULL;

	buff = to_string(x);
	while (buff[o]) {
		path[i] = buff[o];
		i++;
		o++;
	}
	o = 0;
	path[i++] = '-';
	buff = to_string(y);
	while (buff[o]) {
		path[i++] = buff[o++];
	}
	path[i++] = '.';
	path[i++] = 'l';
	path[i++] = 'c';
	path[i] = 0;
}

char *get_path(int x, int y)
{
	char *path = malloc(sizeof(char) * (9 + 4 + 2 + 5));
	char *buff = NULL;
	int i = 0;
	int o = 0;
	char * const begin = "data/level/c";

	for (i = 0; i < my_strlen(begin); i++) {
		path[i] = begin[i];
	}
	part_two(x, y, i, path);
	return path;
}