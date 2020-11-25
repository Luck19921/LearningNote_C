#include <stdio.h>

int main()
{
    char str[] = "Albert"; //计舱str
    char *target = str;
    int count = 0;

    while (*target++ != '\0') //浪琩target琌单str[]程(程常穦ノ\0挡)
    {
        count++;
    }
    printf("target碞琌str[]羆Τ%dダ!\n", count);
    printf("str琌: %p\n", str);
    printf("str琌: %p\n", &str[0]);
    //计舱ㄤ龟琌计舱材じ
    return 0;
}


