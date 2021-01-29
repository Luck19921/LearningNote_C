#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *fp; //創建fp指標的FILE類型變數
   char buf[256];
   char tmp[256] = {0};
   char *delim = "zain=";
   memset(buf, 0, sizeof(buf));
   fp = fopen("zain_log", "r"); //fp = 被指定了開啟zain_log檔案的一個變數
   fgets(buf, sizeof(buf), fp);
   snprintf(tmp, sizeof(tmp), "%s", strtok(buf, delim));

   // char *token;
   //
   // token = ;
   // printf("%s\n", token);
   //snprintf(tmp, sizeof(tmp), "%s", strtok(buf, delim));
   printf("%s", tmp);
   printf("delim: %s\n", &delim);
   printf("%d", 3);

   //zain=01.00.00.999
   //snprintf(buf, sizeof(buf), "%s", fp);
   //刪除字串中的前5位 (buf[0]~buf[4])
   //刪除del_index=0~4, 刪除長度5
   //printf("%s", buf);
   fclose(fp); //關閉檔案(當初開啟檔案的變數名稱)
   return 0;
}
