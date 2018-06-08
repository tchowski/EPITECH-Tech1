/*
** EPITECH PROJECT, 2018
** test.c
** File description:
** test
*/

#include  <criterion/criterion.h>
#include  <criterion/redirect.h>
#include  <fcntl.h>
#include  <unistd.h>
#include "../get_next_line.h"

char *get_next_line(int fd);
int fd =  -1;
/*
The  file  contain  the  following  content:
Confidence  is so  overrated.
It's when we're most  uncomfortable  and in  desperate  need of an  answer  that we grow
the  most.
*/
void  open_file(void)
{
fd = open("data.txt", O_RDONLY);
cr_redirect_stdout ();
}
void  close_file(void)
{
if (fd !=  -1)
close(fd);
}
Test(get_next_line , read_line , .init = open_file , .fini = close_file) {
char *expected = "Confidence  is so  overrated.";
char *got = get_next_line(fd);
cr_assert_str_eq(got , expected);
}
