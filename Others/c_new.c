#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fp; //創建fp指標的FILE類型變數
   fp = fopen("file.txt", "w"); //fp = 被指定了開啟file.txt檔案的一個變數
   fprintf(fp, "%s", "Albert just wirtes this text");//fprint(開檔變數, %s是輸入格式, 將被輸入的內容
   fclose(fp); //關閉檔案(當初開啟檔案的變數名稱)
   printf("Albert Just Did Something at file.txt...\nABCDEFG");
   getchar();
   return(0);
}