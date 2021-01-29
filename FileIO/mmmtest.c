#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char *nb3 =NULL;
  char buf[256] = "0";
  //sprintf(nb3, "%s", sizeof(nb3));
  nb3 = buf;
  printf("tracker\n");
  printf("nb3: %s\n", nb3);

  int result = strcmp(nb3, "0");
  printf("%s\n", result);



  return 0;
}
