#include <stdio.h>

int main()
{
    char str[] = "Albert"; //�ƲզWstr
    char *target = str;
    int count = 0;

    while (*target++ != '\0') //�ˬdtarget�O�_���P��str[]���̫�@��(�̫�@�쳣�|��\0����)
    {
        count++;
    }
    printf("target�]�N�Ostr[]�`�@��%d�Ӧr��!\n", count);
    printf("str���a�}�O: %p\n", str);
    printf("str���a�}�O: %p\n", &str[0]);
    //�Ʋզa�}���O�ƲղĤ@�Ӥ������a�}
    return 0;
}


