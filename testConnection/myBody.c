#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func1.h"

//func1實作在func1.c
//並在func1.c內部 include func1.h header file
//func1.h 內去宣告指定func1()的function型別與所使用變數應傳入的型別
//最後在主程式內宣告include func1.h header file

int main(void)
{
  int i;
  for (i=0; i<= 10; i++)
  {
    printf("%d\n", func1(10, i));
    ///printf("%s\n", MYNAME);
  }
  return 0;
}
