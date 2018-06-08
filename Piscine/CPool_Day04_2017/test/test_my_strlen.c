#include <criterion/criterion.h>
#include <unistd.h>
#include "my.h"
/*
 * void my_putchar(char c)
{
	write(1, &c, 1);
}

int my_strlen(const char *str)
{
	int i = 0;

	while (str[i])
	{
		my_putchar(str[i]);
		i++;
	}
	return (i);
}
*/

const char *str = "Hello World";
const int len = 11;

Test(utils, is_str_length_equal_to_len_v1)
{
	cr_assert(my_strlen(str) == len);
}
