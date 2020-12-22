#include <stdio.h>
#include <stdlib.h>
#include "ExternIntro_test1.c"
#include "ExternTestFolder/ExternIntro_test2.c"
#include "myHeader.h"

int main()
{
  extern double v;
  extern double c;

  v = 2000;
  //c = 19;
  printf("%f\n", v);
  printf("%f\n", c);
  myHeader = 1087;
  printf("myHeader: %f\n", myHeader);
  return 0;
}

/*
想要呼叫其他檔案內的變數，首先你必須Include該檔案，像本例就是include "檔案名稱"
如果在相同資料夾可以直接include檔案名稱即可，但若是有分上下層資料夾，必須在檔案名稱前加上檔案的路徑
關於當前資料夾呼叫其他C ExternIntro_test1.c
關於呼叫下一層資料夾內的C file的變數，請看StaticRootTest/ExternIntro_test2.c
*/
