#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
關於常數:以const所宣告的變數
一但被指定值後, 便無法再次改變變數的值
但也有特例可以強制如下改變數值
*/
int main()
{
  int x = 10;
  int y = 20;
  int* const p = &x;
  //p = &y; 指標常數p被賦予&x的地址, 就無法再次被改變
  printf("Pointer Const p: %d\n", *p);

  const int n1 = 100;
  const int *n2 = &n1;
  //若要透過取址拿取常數int變數的地址
  //只能宣告n2為常數指標變數
  printf("Pointer Const n2: %d\n", *n2);
}
