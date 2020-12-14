#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int x = 100;
  printf("Inrement x by catching its address, &x value: %d\n", increment(&x));
  printf("Original x Value is: %d\n", x);
}

int increment(int *n)
{
  *n = *n + 10;
  return *n;
}

/*
這次的取值就是透過&x 直接抓取x的記憶體地址
拿這個值再去作遞增運算 最後結果也會連帶影響變數x的Value
因為他的地址被拿去作遞增運算了

*/
