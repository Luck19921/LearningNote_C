#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //如何初始化? 三種方式->1.宣告就初始 2.memset 3.bzero
    char buf[256];
    char buf2[256];
    char buf3[256] = {0}; //第一種初始化方法
    char buf4[256];
    char temp[128] = {0};
    //bzero(buf4, sizeof(buf4)); //第二種初始化方法, 但bzero是Unix用法, 一般Windows都會使用memset
    memset(buf4, '\0', sizeof(buf4)); //第三種初始化方法
    sprintf(temp, "pf_rule_%d", 5);
    printf("temp: %s\n", temp);
    //snprintf(buf4, sizeof(buf4), "%s", cms_get_value(temp));
    snprintf(buf4, sizeof(buf4), "%s", "Hey Hey Hey");

    printf("This is a test\n");

    memset(buf, '\0', sizeof(buf));
    memset(buf2, '\0', sizeof(buf2));

    sprintf(buf, "%d", 1024);
    sprintf(buf2, "%s", "This is buf2...");
    sprintf(buf3, "%s", "123456789");

    printf("===第一次Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);
    printf("Buf4: %s\n", buf4);

    printf("\n");
    printf("即將進行重置各buf array的記憶體空間...\n");
    /*
    bzero(buf, sizeof(buf));
    bzero(buf2, sizeof(buf2));
    bzero(buf3, sizeof(buf3));
    */
    memset(buf, '\0', sizeof(buf));
    memset(buf2, '\0', sizeof(buf2));
    memset(buf3, '\0', sizeof(buf3));
    memset(buf4, '\0', sizeof(buf4));
    printf("\n");

    printf("===第二次Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);
    printf("Buf4: %s\n", buf4);
    printf("這是三種初始化，避免殘值留存於記憶體中又誤引用的方法。\n");
}
