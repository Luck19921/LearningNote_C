#include <stdio.h>


int main() {
//宣告字元變數
//Char 是以ASCII編碼
  char ch = 'A';
  printf("%%c=> %c\n", ch);
  printf("%%d=> %d\n", ch);

  for(int i = 0; i < 58; i++) {
    printf("%c\n", ch);
    ch += 1;
  }
  return 0;
}
