#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strrpc(char *str,char *oldstr,char *newstr){
    char bstr[strlen(str)];//轉換緩衝區
    memset(bstr,0,sizeof(bstr));

    for(int i = 0;i < strlen(str);i++){
        if(!strncmp(str+i,oldstr,strlen(oldstr))){//查詢目標字串
            strcat(bstr,newstr);
            i += strlen(oldstr) - 1;
        }else{
        	strncat(bstr,str + i,1);//儲存一位元組進緩衝區
	    }
    }

    strcpy(str,bstr);
    return str;
}

int main()
{
   char oldV[50] = {0};
   char newV[50] = {0};
   char delim[] = ".";
   char *token;
   snprintf(newV, sizeof(newV), "%s", "01.00.00.999");
   snprintf(oldV, sizeof(oldV), "%s", "01.00.00.1100");

   printf("%s\n", newV);
   printf("%s\n", oldV);

   snprintf(newV, sizeof(newV), "%s", strrpc(newV, ".", ""));
   snprintf(oldV, sizeof(oldV), "%s", strrpc(oldV, ".", ""));

   printf("%s\n", newV);
   printf("%s\n", oldV);

   int feedback = 100;

   printf("newV strlen:%d\n", strlen(newV));
   printf("oldV strlen:%d\n", strlen(oldV));

   feedback = strcmp(newV, oldV);
   printf("FEEDBACK: %d\n", feedback);

   int new_d1=atoi(newV);
   int old_d1=atoi(oldV);
   printf("NewV D1: %d\nOldV D1: %d\n", new_d1, old_d1);

   if (new_d1 > old_d1) {
     printf("New D1 > Old D1\n");
   } else if (new_d1 == old_d1) {
     printf("Same Value\n");
   } else {
     printf("New D1 < Old D1\n");
   }









   char newP[3];
   char oldP[3];
   memset(newP, 0, sizeof(newP));
   memset(oldP, 0, sizeof(oldP));


   int i=0;
   for(i=0, i<4; i++;)
   {
     sprintf(newP, "%s", strtok(newV, delim));
     printf("current newP:%s\n",newP);
   }



   return 0;
}
