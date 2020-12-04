#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func1.h"

int main(void)
{
  int i;
  for (i=0; i<= 10; i++)
  {
    printf("%2d%5d\n", i, func1(2, i));
    ///printf("%s\n", MYNAME);
  }

  return 0;
}
