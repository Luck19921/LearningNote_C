#include <stdio.h>
#include <stdlib.h>

//The Example References
//https://blog.gtwang.org/programming/c-memory-functions-malloc-free/

//典型記憶體配置一維陣列
int main() {
  //用以管理動態記憶體的指標
  int *dynArr;

  //指定空間大小
  int arrLeng = 10;

  //dynArr 被指定要取得記憶體空間 長度 x 單位int
  dynArr = malloc(arrLeng * sizeof(int));
  printf("Malloc the memory address:%p", dynArr);
  if (dynArr == NULL) {
    //if (dynArr == NULL) 是為了檢查是否有重置記憶體空間
    //有取得=記憶體非NULL 記憶體尚未被重置
    //沒取得=記憶體NULL 沒拿到新記憶體空間
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
