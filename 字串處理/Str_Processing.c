#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
//gets function
int main()
{
  char a[100];
  scanf("%s", a);
  gets(a);
}
*/

/* */
//puts function
int main()
{
  //宣告char型態 容量為100的字串陣列 並初始化值為Hello world
  char arr[100] = {"Hello world"};
  //無指定長度資料型態(無正負數之分)len 透過函數strlen去抓上面宣告的字串陣列長度
  unsigned int len = strlen(arr);
  //Sizeof代表著陣列的容量, 而Strlen則是代表陣列內實際包含元素的寬度
  printf("Sizeof Arr:%d\nstrlen(arr):%d\n", sizeof(arr), len);
  printf("arr: %s\n", arr);
  puts(arr);
  //puts 有點像是列印pritnf函式
}
