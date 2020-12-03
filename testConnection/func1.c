#include <stdio.h>
#include <stdlib.h>
#include "func1.h"

int func1(int a, int x)
{
  int result = 1;
  while (x > 0) {
    result *= a;
    x--;
  }
}
