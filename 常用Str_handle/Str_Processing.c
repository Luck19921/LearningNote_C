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
  char arr[100] = {"Hello world"};
  unsigned int len = strlen(arr);
  printf("Sizeof Arr:%d, strlen(arr):%d\n", sizeof(arr), len);
  printf("arr: %s\n", arr);
  puts(arr);
}
