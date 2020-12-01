#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char myArray[256]; //透過Memset初始化字串陣列
  char myString = 'A';
  int myInt = 0;
  float myFloat = 0; //單精度 準確沒有double來得高
  double myDouble = 0; // 雙精度 非常精準
  _Bool myBool = 0;

  memset(myArray, '\0', sizeof(myArray));
  myString = 'B';
  myInt = 87;
  myFloat = 3.14;
  myDouble = 3.141592653;


  printf("This is my Array: %s\n", myArray);
  printf("This is my String: %c\n", myString);
  printf("This is my Int: %d\n", myInt);
  printf("This is my Float: %.2f\n", myFloat);
  printf("This is my Double: %11.9f\n", myDouble);
  printf("This is my Bool: %d \n", myBool);
  /*
  %s = String for String Array
  %c = Char for A word
  %d = Int for A number or value
  %.2f = Float .2f小數點後兩位
  %11.9f = Double .9代表小數點後九位
  而11則是代表這串數字的總寬度為幾位數
  */
}
