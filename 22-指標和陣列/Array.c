#include <stdio.h>

int main()
{
   char str[5] = {1, 2, 3, 4, 5};
    //陣列變數若取記憶體地址
    //是否等同於 陣列的第一個元素記憶體地址
    //ANS: Yes
    printf("str 的地址是:%p\n", str);
    printf("str 的地址是:%p\n", &str[0]); //下標操作
    return 0;
}
