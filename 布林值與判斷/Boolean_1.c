#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int err_code = 1;
  int err_2 = 0;
  //Change the err_code

  printf("當err_code = true && 反eer_2");
  if (err_code && !err_2)
  {
    //When err_code does'nt equal with 0. (-1, 1, 2, 3, 4, 5)
    printf("Err(%d) is true.\n", err_code);
  } else {
    //When err_code equals with 0. (Only 0)
    printf("Err(%d) is false.\n", err_code );
  }

  return 0;
}
