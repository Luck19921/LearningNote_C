#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//宣告指標變數注意事項
int main()
{
  int *p1;
  int* p2;
  int * p3;
  int* p4, p5; //實際上p5並不是指標變數

  //void型態的指標沒有任何型態資訊
  //只會被用來儲存地址, 不可以使用*運算子對void*型態指標取值
  //你必須轉型至對應的型態, 如下範例:
  int n = 10;
  void *p = &n; //指標p對int n取值(也抓地址)
  int *iptr = (int*) p; //要輸出int, 必須將void p轉型成相同型別int
  /*
  錯誤範例:
  printf("%d\n", *p);
  */
  printf("%d\n", *iptr);
  return 0;
}
