/*
** Test sample for libgnl.a
** Read line on standard input
*/

#include <stdio.h>
#include <stdlib.h>
#include "gnl.h"
#include "my.h"

int	main(int argc, char **argv)
{
  char	*s;
  int	end;

  end = 0;
  while (!end)
    {
      s = get_next_line(0);
      //s = get_next_line_dbg(0);  /* With debug Mode */
      if (s > 0)
	printf("Next line : %s\n", s);
      else
	end = !end;
    }
  return (0);
}
