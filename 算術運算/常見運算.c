#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b) {
  int result;

  result = a + b;
  return result;
}

int subtraction(int a, int b) {
  int result;

  result = a - b;
  return result;
}

int multiplication(int a, int b) {
  int result;

  result = a * b;
  return result;
}

int division(int a, int b) {
  int result;

  result = a / b;
  return result;
}
//相除求餘數
int division_remainder(int a, int b) {
  int result;

  result = a % b;
  return result;
}

int main() {
  printf("Add Result: %d\n", addition(5, 10));
  printf("Sub Result: %d\n", subtraction(10, 5));
  printf("Multi Result: %d\n", multiplication(5, 10));
  printf("Divis Result: %d\n", division(10, 5));
  printf("Divis_Remainder: %d\n", division_remainder(10, 3));
}
