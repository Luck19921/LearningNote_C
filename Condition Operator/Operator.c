#include <stdio.h>
#include <stdlib.h>

#define UP2DATE			0
#define AVAILABLE		1


int main()
{
  //  int rtn= 0, omg;
  //  int chk = AVAILABLE;
  //  rtn= 1;
  //  char buf1[50] = "ABC";
  //  char buf2[50] = "ABC";
  //  int ret = strcmp(buf1, buf2);
  //
  //  if ( ret == 0 )
  //  {
  //  printf("ret: %d\n", ret);
  // }
char buf[50] = {0};
char buf2[50] = {0};
snprintf(buf, sizeof(buf), "%s", "1");
snprintf(buf2, sizeof(buf), "%s", "1");
printf("buf: %s, buf2: %s\n", buf, buf2);
int cmp = strcmp(buf, buf2);
printf("cmp: %d\n", cmp);
//if (cmp == 0)
if (cmp = 0)
{
  printf("Oh Yes!\n");
} else {
  printf("Oh No!\n");
}

// if (chk = 1){
//   printf("CHK = 1, AVAILABLE\n");
// }
//
//
// if (chk == AVAILABLE) {
//   printf("It's true.\n");
// } else if (chk == UP2DATE)
// {
//   printf("It's not true.\n");
// }
//    omg = ( (rtn>0) ? AVAILABLE : UP2DATE ) ;
//    printf("rtn value is %d\n", rtn);
//    printf("omg value is %d\n", omg);
}
