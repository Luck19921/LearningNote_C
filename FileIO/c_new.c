#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fp; //創建fp指標的FILE類型變數
   fp = fopen("file.txt", "w"); //fp = 被指定了開啟file.txt檔案的一個變數
   fprintf(fp, "%s", "Albert just wirtes this text\nTxt File中的第二行內容\n");
   fprintf(fp, "%s", "fprintf(fopen的變數, %s是輸入格式, 將被輸入的內容);\n");
   //會接續上一段fprintf的內容繼續編輯文件
   fclose(fp); //關閉檔案(當初開啟檔案的變數名稱)
   printf("Albert Just Did Something at file.txt...");
   getchar();
   return(0);
}
