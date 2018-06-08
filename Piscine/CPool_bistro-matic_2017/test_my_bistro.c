#include <criterion/criterion.h>
#include <unistd.h>
#include "my.h"

char *infin_add(char *s1, char *s2);

char *str = "2";
char *str2 = "3";
char *str3 = "4+4";
char *str4 = "5";

Test(utils, first_test_add_inf)
{
	cr_assert(infin_add(str, str2));
}

Test(utils, second_test)
{
	cr_assert(summands(&str3));
}

