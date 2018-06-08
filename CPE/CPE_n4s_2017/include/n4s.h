/*
** EPITECH PROJECT, 2018
** n4s.h
** File description:
** n4s.h
*/

#ifndef _N4S_H_
#define _N4S_H_

/* Defines */

#define MAX (100)
#define START "START_SIMULATION\n"
#define MOVEON "CAR_FORWARD:"
#define GET_INFO "GET_INFO_LIDAR\n"
#define STOP "STOP_SIMULATION\n"

/* includes */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* Prototypes */

void    my_putchar(char c);
int     my_putstr(char *str);
char    *gnl(int fd);
char    **str_to_array(char *);
char    *my_strncpy(char *dest, char *src, int n);
void    display_path(char **);
int	my_getnbr(char *);
float	turn(char **);
int	stop_wall(char **);


#endif /* _N4S_H_ */
