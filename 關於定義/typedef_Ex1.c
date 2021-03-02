#include <stdio.h>
#include <stdlib.h>

int main() {
  typedef unsigned char U8;
  unsigned char number1 = 'A';
  U8 number2 = 'B';

  printf("Value of number1: %c\n", number1);
  printf("Value of number2: %c\n", number2);
  printf("number1's data type(unsigned char) is equal to number2.\n");
  return 0;
}
