#include "my.h"

char    *cut_str(char *str)
{
  short i;

  if (!str)
    return (0);
  i = -1;
  while (str[++i])
    if (str[i] == ' ')
      str[i] = 0;
  return (str);
}
