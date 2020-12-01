#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//長度依序為 short int >= int >= long int >= long long int

int main()
{
  short int a0;
  int a1;
  long int a2;
  long long int a3;
  unsigned int a4 = -1;
  //unsigned 所宣告的變數中不含有負數
  //signed int就是一般可放入負數的int, 只不過不會把singed寫出來而已

  printf("Short Int a0 size:%d\n", sizeof(a0));
  printf("Int a1 size:%d\n", sizeof(a1));
  printf("Long Int a2 size:%d\n", sizeof(a2));
  printf("Long Long Int a3 size:%d\n", sizeof(a3));
  printf("Unsigned Int a4 size:%d\n", sizeof(a4));
  printf("Use %%U -> Unsigned Int: %u\n", a4);
  printf("User %%D -> Unsigned Int: %d\n", a4);
  /*
  printf內印出帶有正負數使用 %d, 但若是要印unsigned int必須使用 %u
  */
}
