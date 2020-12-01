#include <stdio.h>
#include <stdlib.h>

int main()
{
  char myStrings[] = {'H', 'E', 'L', 'L', 'O', '\0'};
  //必須在字串尾端加上 '\0', '\0'可以令機器判斷為Strings最後一個位置的地址
  char myStrings2[] = "Hello Dude!";
  printf("%s\n", myStrings);
  printf("%s\n", myStrings2);
  return 0;
}
