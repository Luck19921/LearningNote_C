#include <stdio.h>
#include <stdlib.h>
#include "foo.c"
#include "foo.h"

int main()
{
  //extern double v = 1009; Error occur
  v = 2020;
  for (int i = 0; i < 10; i ++) {
    v ++;
    foo();

    foo2();
    printf("%f\n", v);
  }
  return 0 ;
}

/*
第8行出現錯誤，因為在foo.c內的double v前面被加上了Static，代表他不給你extern後再來初始化數值
換句話說，你只能在當前使用那個Value且不可變更其Value
*/
