#include <stdio.h>
#include <stdlib.h>
#include "func1.h"

int func1(int a, int b)
{
  int result = 1;
  while (b > 0) {
    result *= a;
    b--;
  }
}
