#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
關於常數:以const所修飾的宣告變數
一但被指定其值後, 便無法再次改變該變數的數值
但也有特例如下, 可以強制改變 '常數數值'
*/
int main()
{
  int x = 10;
  int y = 20;
  int* const p = &x;
  //p = &y; 常數指標變數p被賦予了&x的記憶體地址
  //p理論上是無法再次被改變其值的
  printf("Pointer Const p: %d\n", *p);

  const int n1 = 100;
  const int *n2 = &n1;
  //若要透過取址拿取常數int變數的地址
  //只能宣告n2為常數指標變數
  printf("Pointer Const n2: %d\n", *n2);
}
