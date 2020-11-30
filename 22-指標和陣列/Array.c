#include <stdio.h>

int main()
{
   char str[5] = {1, 2, 3, 4, 5};
    //數組名是否等同於數組的第一個元素地址
    printf("str 的地址是:%p\n", str);
    printf("str 的地址是:%p\n", &str[0]); //下標操作

    return 0;
}
