#include <stdio.h>
#include <stdlib.h>

//典型記憶體配置一維陣列
int main() {
  //用以管理動態記憶體的指標
  int *dynArr;
  //指定空間大小
  int arrLeng = 10;
  //取得記憶體空間
  dynArr = malloc(arrLeng * sizeof(int));
  printf("Allocating the memory address:%p", dynArr);
  if (dynArr == NULL) {
    //if dynArr == NULL 這是為了檢查是否有重置記憶體空間
    //如果有取得記憶體就不會為NULL 沒取得就代表沒拿到新記憶體空間
    //無法取得記憶體空間
    fprintf(stderr, "Error: Unable to allocate required memory\n");
    return 1;
  }

  //使用動態取得的記憶體空間
  int i;
  for( i=0; i<arrLeng; i++) {
    dynArr[i] = i;
    printf("%d\n", dynArr[i]);
  }

  //Releasing the memory
  free(dynArr);
  return 0;
}
