#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //�p���l��? �T�ؤ覡->1.�ŧi�N��l 2.memset 3.bzero
    char buf[256];
    char buf2[256];
    char buf3[256] = {0}; //�Ĥ@�ت�l�Ƥ�k
    char buf4[256];
    char temp[128] = {0};
    //bzero(buf4, sizeof(buf4)); //�ĤG�ت�l�Ƥ�k, ��bzero�OUnix�Ϊk, �@��Windows���|�ϥ�memset
    memset(buf4, '\0', sizeof(buf4)); //�ĤT�ت�l�Ƥ�k
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

    printf("===�Ĥ@��Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);
    printf("Buf4: %s\n", buf4);

    printf("\n");
    printf("�Y�N�i�歫�m�Ubuf array���O����Ŷ�...\n");
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

    printf("===�ĤG��Printf===\n");
    printf("Buf: %s\n", buf);
    printf("Buf2: %s\n", buf2);
    printf("Buf3: %s\n", buf3);
    printf("Buf4: %s\n", buf4);
    printf("�o�O�T�ت�l�ơA�קK�ݭȯd�s��O���餤�S�~�ޥΪ���k�C\n");
}
