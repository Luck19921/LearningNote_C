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

    printf("===�Ĥ@��Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);

    printf("\n");
    printf("�Y�N�i�歫�m�Ubuf array���O����Ŷ�...\n");
    bzero(buf, sizeof(buf));
    bzero(buf2, sizeof(buf2));
    bzero(buf3, sizeof(buf3));
    printf("\n");

    printf("===�ĤG��Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);
    printf("�o�O�T�ت�l�ơA�קK�ݭȯd�s��O���餤�S�~�ޥΪ���k�C\n");
}
