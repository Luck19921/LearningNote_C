#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UpgradeTure    1
#define UpgradeFalse    0


int main()
{
  int updateOrNot = 0;

  //改變updateOrNot int數值
  // updateOrNot += 1;

  if (updateOrNot == UpgradeFalse)
  {
    printf("Update Status: False, updateOrNot = 0\n");
  } else {
    printf("Update Status: True, updateOrNot = 1\n");
  }

  return 0;
}
