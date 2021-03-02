#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char buf1[50] = {0};
  char buf2[50] = {0};
  char v_buf[50] = {0};

  snprintf(buf1, sizeof(buf1), "%s", "Zain");
  snprintf(buf2, sizeof(buf2), "%s", "Spain");
  snprintf(v_buf, sizeof(v_buf), "%s", "Zain");

  printf("Version Buf: %s\n", v_buf);
  printf("Buf1: %s\n", buf1);
  printf("Buf2: %s\n", buf2);

  if(strcmp(buf1, "Zain") == 0) {
    printf("buf1 is Zain!\n");
    printf("Keep going on.\n");
  } else {
    printf("buf1 is not equal Zain!\n");
  }

  //需求是 必須在最外層先行判斷當前裝置的cid是否為ZainJO
  //cid = ZainJO繼續往下作判斷: profile cms value -> z_file exists or not -> compare the software version
  //cid != ZainJO跳出迴圈 直接安裝
  //當下改了裝置上的環境變數 cid = ZainJO, 但透過CMS取到的cid依然是舊值 ZainIQ
  //可能需要用system(fw_printenv cid...)的方式取到更改後的cid value
  //再拿此value去做安裝的前置判斷才會成功實作

  snprintf(buf1, sizeof(buf1), "%s", "A");
  snprintf(buf2, sizeof(buf2), "%s", "Z");
  int rtn = 9999;
  //rtn = strncmp(const char *__s1, const char *__s2, size_t __n)



  return 0;
}
