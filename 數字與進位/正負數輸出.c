#include <stdio.h>
#include <stdlib.h>

int main() {
  //數字通常都會帶有正負符號
  //若宣告一變數為unsigned類型
  //也就意味著此變數並不存在正負屬性
  short a = 0100; //8 Octet
  int b = 0x1; //16 Hexadecimal
  long c = 720; //10 Decimal

  unsigned short m = 0xffff; //16 Hexadecimal
  unsigned int n = 0x80000000; //16 Hexadecimal
  unsigned long p = 100; //10 Decimal

  //以無符號形式輸出有符數
  printf("a=%#ho, b=%#x, c=%ld\n", a, b, c);
  //以有符號形式輸出無符號類型
  printf("m=%hd, n=%d, p=%ld\n", m, n, p);
/*
  %d 以十进制形式输出有符号数；
  %u 以十进制形式输出无符号数；
  %o 以八进制形式输出无符号数；
  %x 以十六进制形式输出无符号数。
*/
  return 0;
}
