#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UpgradeTrue    1
#define UpgradeFalse    0


int main()
{
  int updateStatus = -100;
  char buf[256] = {0};
  //改變updateOrNot int數值
  // updateOrNot += 1;
  //初始化buf

  sprintf(buf, "%s", "BCD");
  updateStatus = UpgradeTrue;

  //判斷的變數為int，要做邏輯判斷都使用一個等號運算符
  //若使用int變數作為判斷依據，請使用一個等號運算符
  printf("Check int variables.\n");
  if (updateStatus = -100) {
    printf("-100!! breaking if\n");
  } else {
    //當判斷式指向另一個int變數時，請使用一個等於運算符
    if (updateStatus = UpgradeTrue)
    {
      //situation => true
      printf("Update Status: True, updateStatus = 1\n");
    } else if (updateStatus = UpgradeFalse) {
      //situation => false
      printf("Update Status: False, updateStatus = 0\n");
    } else {
      printf("The upgrade situation is not true and false.\n");
    }
  }
  //當判斷式指向一個char字符型別的變數時，請使用兩個等於運算符
  printf("Check char varialbe.\n");
  if (buf == "ABC") {
    printf("buf is ABC. Result: %s\n", buf);
  } else {
    printf("buf is not ABC. Result: %s\n", buf);
  }
  return 0;
}
