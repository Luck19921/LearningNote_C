#include <stdio.h>
#include <stdlib.h>

int main()
{
  char buf[256] = "10.00.00.999";
  printf("%s\n", buf);

  memset(buf, 0, sizeof(buf)-1);
  printf("%s\n", buf);



  return 0;
}
