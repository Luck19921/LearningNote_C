#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func1.h"

int main(void)
{
  int i;
  for (i=0; i<= 10; i++)
  {
    printf("%d\n", func1(10, i));
    ///printf("%s\n", MYNAME);
  }
  system("pause");
  return 0;
}
