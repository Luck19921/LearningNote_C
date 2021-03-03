#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int* numbers = 0; //儲存輸入的數字 ㄢ  空指標 NULL代表沒有指向任何記憶體位址
  int length = 0; //目前已經輸入的數字個數
  while(1) {
    int input;
    scanf("%d", &input); //透過scanf輸入數字
    if (input == 0) break; //當輸入數字為0 則結束

    //int larger[length + 1]; //產生一個大一格的新陣列
    int* larger = malloc(sizeof(int) * (length + 1 ));
    //單位為int * 長度+1 (那+1是為了計算larger的目前長度)
    //宣告larger時就會一起配置記憶體空間 int陣列 吃int型別，其int記憶體空間2 bytes(16 bit)
    for (int i=0; i<length; i++) larger[i] = numbers[i]; //將舊陣列複製到新陣列(numbers->larger)
    free(numbers); //先釋放舊的記憶體位址
    numbers = larger; //將整數陣列larger存進numbers整數指標

    //上面四行可以簡化
    numbers = realloc(numbers, sizeof(int) * (length +1));
    //重新配置新陣列與記憶體單位 並且回傳記憶體開始的位址

    numbers[length] = input;
    length ++;
    //輸入0就會跳出while loop 跑到這裡就代表還沒結束 所以長度會+1
  } //larger將會於離開可視範圍時被釋放記憶體

  //那又如何在外面的Code 取用該變數與值呢?
  //透過malloc動態的分配記憶體
  //但動態分配的記憶體必須要手動釋放 會導致記憶體洩漏 Memory Leak
  //void free(void* ptr);


  printf("Numbers: ");
  for (int i=0; i<length; i++) {
    printf("%d", numbers[i]);
  }
  printf("\n");
  return 0;
}
