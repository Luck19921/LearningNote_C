#include <stdio.h>

int main()
{
   char str[5] = {1, 2, 3, 4, 5};
    //�ƲզW�O�_���P��Ʋժ��Ĥ@�Ӥ����a�}
    printf("str ���a�}�O:%p\n", str);
    printf("str ���a�}�O:%p\n", &str[0]); //�U�оާ@

    return 0;
}
