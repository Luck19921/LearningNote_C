#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   FILE *fp; //創建fp指標的FILE類型變數
   FILE *fp2;
   char buf[256];
   char buf2[256];
   char tmp[256] = {0};
   char tmp2[256] = {0};
   char *delim = "zain=";
   char *delim2 = "()";
   memset(buf, 0, sizeof(buf));
   memset(buf2, 0, sizeof(buf2));

   fp = fopen("zain_log", "r"); //fp = 被指定了開啟zain_log檔案的一個變數
   fgets(buf, sizeof(buf), fp);
   snprintf(tmp, sizeof(tmp), "%s", strtok(buf, delim));

   fp2 = fopen("software_version", "r");
   fgets(buf2, sizeof(buf2), fp2);
   snprintf(tmp2, sizeof(tmp2), "%s", strtok(buf2, delim2));
   //snprintf(tmp2, sizeof(tmp2), "%s", buf2);

   // char *token;
   //
   // token = ;
   // printf("%s\n", token);
   //snprintf(tmp, sizeof(tmp), "%s", strtok(buf, delim));
   printf("Print the result:\n");
   printf("delim: %s\n", delim);
   printf("%s\n", tmp);

   printf("delim2: %s\n", delim2);
   printf("%s\n", tmp2);


   //zain=01.00.00.999
   //snprintf(buf, sizeof(buf), "%s", fp);
   //刪除字串中的前5位 (buf[0]~buf[4])
   //刪除del_index=0~4, 刪除長度5
   //printf("%s", buf);
   fclose(fp); //關閉檔案(當初開啟檔案的變數名稱)
   return 0;
}
