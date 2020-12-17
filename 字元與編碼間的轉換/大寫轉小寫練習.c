#include <stdio.h>
#include <stdlib.h>
//大寫轉小寫
int main() {
  char inAnswer, outAnswer;
  scanf("%c", &inAnswer);
  outAnswer = inAnswer + 32;
  printf("%c\n", outAnswer);

  return 0;
}
