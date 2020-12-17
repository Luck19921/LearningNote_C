#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char input, output;
  char buf[256] = {0};
  int asciiNum;
  printf("--------Start--------\n");
  printf("Enter a random char please(Any Upper or Lower case).\n");
  scanf("%c", &input);
  asciiNum = (int)input;
  if (asciiNum >= 65 && asciiNum <=90) {
    printf("Upper case -> Lower case\n");
    printf("Input:%c\n", input);
    output = input + 32;
    printf("Lower Case: %c\n", output);
  } else if (asciiNum >= 97 && asciiNum <= 122) {
    printf("Lower case -> Upper case\n");
    printf("Input:%c\n", input);
    output = input - 32;
    printf("Upper Case: %c\n", output);
  } else {
    printf("Out of the range...\n");
  }
  printf("--------End--------\n");
  return 0;
}
