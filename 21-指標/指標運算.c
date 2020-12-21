#include <stdio.h>
int main(void) {
  int *p = 0; //沒有地址
  char *c = 0;
  char myBook = 'A';
  printf("p addr: %p\n", p);
  printf("P value: %d\n", p);
  printf("P+1 addr: %p\n", p+1);
  printf("P+1 value: %d\n", p+1);
  printf("P+2 addr: %p\n", p+2);
  printf("P+2 value: %d\n", p+2);

  printf("myBook addr: %p\n", myBook);
  printf("myBook value: %c\n", myBook);

  c = &myBook; //c 取 myBook位址

  printf("c addr: %p\n", c);
  printf("c value: %c\n", c);
  printf("C+1 addr: %p\n", c);
  printf("C+2 addr: %p\n", c);

  /*
  指標的加減法與一般數值的加減法不同。
  在指標運算上 +1 -> 表示前進一個資料型態的記憶體長度
  Ex:在int型態的指標上加一 => 記憶體位址前進4個位元組的長度
  https://openhome.cc/Gossip/CGossip/PointerArithmetic.html
  */
}
