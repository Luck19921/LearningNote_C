#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char ss = 'S'; //占了 1bit 記憶體空間
  char ss2 = 'A';
  char ssaa[] = "sa";
  char omg[] = "Oh My Gosh";
  omg[strlen(omg) -1] = '\0';
  printf("Sizeof: %ld, ASCII Code: %p, Address: %p\n", sizeof(ss), ss, &ss);
  printf("Sizeof: %ld, ASCII Code: %p, Address: %p\n", sizeof(ss2), ss2, &ss2);
  printf("Sizeof: %ld, ASCII Code: %p, Address: %p\n", sizeof(ssaa), ssaa, &ssaa);
  printf()
  //printf("ascii code: %p\n", ss); //Output 73 他是值 不是記憶體位址
  //printf("address: %p\n", &ss);
  FILE *fp;
  fp = fopen("text.txt", "w");
  //fwrite(要傳入的值, 所需記憶體空間, 寫進哪個file)
  fwrite(&ss, 1, sizeof(ss), fp);
  fwrite(&ss2, 1, sizeof(ss2), fp);
  fwrite(ssaa, 2, sizeof(ss), fp); //陣列不用使用取址符號也可以讀到content
  fwrite(omg, strlen(omg), sizeof(omg), fp);
  return 0;
}
