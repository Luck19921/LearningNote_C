#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char buf[256];
    char buf2[256];
    char buf3[256] = {0};
    char buf4[256];
    char temp[128] = {0};

    bzero(buf4, sizeof(buf4));

    sprintf(temp, "pf_rule%d", 5);
    snprintf(buf4, sizeof(buf4), "%s", cms_get_value(temp));

    printf("temp: %s\n", temp);
    printf("buf4: %s\n", buf4);

    memset(buf, '\0', sizeof(buf));
    bzero(buf2, sizeof(buf2));

    sprintf(buf, "%d", 1024);
    sprintf(buf2, "%s", "This is buf2...");
    sprintf(buf3, "%s", "123456789");

    printf("===第一次Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);

    printf("\n");
    printf("即將進行重置各buf array的記憶體空間...\n");
    bzero(buf, sizeof(buf));
    bzero(buf2, sizeof(buf2));
    bzero(buf3, sizeof(buf3));
    printf("\n");

    printf("===第二次Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);
    printf("這是三種初始化，避免殘值留存於記憶體中又誤引用的方法。\n");
}
