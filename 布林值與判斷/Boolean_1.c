#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int err_code = 0;
  //Change the err_code

  if (err_code)
  {
    //When err_code does'nt equal with 0. (-1, 1, 2, 3, 4, 5)
    printf("Err is true.\n");
  } else {
    //When err_code equals with 0. (Only 0)
    printf("Err is false.\n");
  }

  return 0;
}
