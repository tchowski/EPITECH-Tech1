/*
** EPITECH PROJECT, 2018
** play.c
** File description:
** play
*/

int same_char(char a, char b)
{
	if(a == b)
		return(1);
	if(a + 32 == b)
		return(1);
	if(a + 32 != b)
		return(0);
	//if(a != b)
	//	return(0);
	if(a - 32 == b)
		return(1);
	if(a != b + 32)
		return(0);
}

char *play(char **av)
{
	int i = 0;
	int j = 0;

	while(av[1][i]) {
		if(same_char(av[1][0], av[1][i]) == 1)
			return("wesh");
		else
			return("non");
		i++;

	}
}
