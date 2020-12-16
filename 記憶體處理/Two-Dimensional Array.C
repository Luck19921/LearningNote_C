#include <stdio.h>
#include <stdlib.h>

//若要動態配置連續記憶體空間並當成二維(多維)陣列操作，得以陣列的陣列來實作
//二維陣列有兩段一維陣列
//int **arr = calloc(2, sizeof(int*));

int main(void) {
  int **arr = calloc(2, sizeof(int*));
  for(int i = 0; i < 2; i ++) {
    //模擬當一段陣列長度為3時
    arr[i] = calloc(3, sizeof(int));
    //模擬動態配置不同長度的陣列
    /*
    arr[0] = calloc(3, sizeof(int));
    arr[1] = calloc(5, sizeof(int));
    */
  }

    //輸出陣列
    for(int i = 0; i < 2; i++) {
      for(int j = 0; j < 3; j++) {
        printf("%d", arr[i][j]);
      }
      putchar('\n');
    }
    for(int i = 0; i < 2; i++) {
      free(arr[i]);
    }
    free(arr);
}
