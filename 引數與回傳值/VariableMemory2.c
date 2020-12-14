#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x = 10;

  printf("Increment x = %d\n", increment(x));
  printf("Original x = %d\n", x);
}

int increment(int n) //將n丟進來 輸出n+1
{
  n = n + 1;
  return n;
}

/*
將x傳入function作遞增運算後輸出也不會影響到原始函式內的x值
可以試試看在使用increment時，使用&運算子取址
請見VariableMemoery3.c
*/
