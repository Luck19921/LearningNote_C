#include <stdio.h>

int main()
{
   char str[5] = {1, 2, 3, 4, 5};
    //�}�C�ܼƭY���O����a�}
    //�O�_���P�� �}�C���Ĥ@�Ӥ����O����a�}
    //ANS: Yes
    printf("str ���a�}�O:%p\n", str);
    printf("str ���a�}�O:%p\n", &str[0]); //�U�оާ@
    return 0;
}
