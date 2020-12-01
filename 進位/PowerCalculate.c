#include <stdio.h>
#include <math.h>

int main()
{
  int result1 = pow(2, 4);
  int result2 = pow(5, 6) -10;
  int result3 = pow(7, 2) -9;
  int result4 = pow(2, 7);
  int result5 = pow(2, 7) -1;

  printf("The power of fourth(2^4) = %d\n", result1);
  printf("The power of sixth(5^6) -10 = %d\n", result2);
  printf("The power of square(7^2) -9 = %d\n", result3);
  printf("The power of seventh(2^7) = %d\n", result4);
  printf("The power of seventh(2^7) -1 = %d\n", result5);
  return 0;
}
