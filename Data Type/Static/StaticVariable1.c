#include <stdio.h>
#include <stdlib.h>

void count();

int main()
{
  for (int i = 0; i < 10; i ++) {
    count();
  }
}

void count() {
  static int c = 1;
  printf("C value is %d\n", c);
  c++;
}

/*
以上為例，若於變數宣告階段，就在前面加上Static將使數值被儲存於一個固定的記憶體位置。
若變數宣告於函式內，當此函式執行結束後，這個變數也依舊會存在(僅限存在於函式內部)，
且值將直到整個程式結束時才會被重置!
*/
