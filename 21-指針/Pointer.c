#include <stdio.h>
#include <time.h> //time
#include <fcntl.h> //O_WRONLY

int main()
{
    char a = 'F';
    int f = 123;
    time_t tp;

    char *pa = &a; //�ŧi�n���w�ܼƻP�������ܶq��
    int *pb = &f; //*���w�N���O�ѦҨ쪺�a�}(���a�}), &�N���O�ѦҨ쪺��(����)

    time(&tp);

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pb);

    *pa = 'C';//�z�L*ptr�h��a�}���Ȱ��ާ@
    *pb += 1;

    printf("now, a = %c\n", *pa);//�L�X�ާ@�᪺���G
    printf("now, f = %d\n", *pb);//�z�L���w �i���X��

    printf("sizeof pa = %d\n", sizeof(pa)); //���w�a�}������size, �]���O�Ʀr�a�}, �q�`�|����4
    printf("sizeof pb = %d\n", sizeof(pb));

    printf("The area of a is %p\n", pa);
    printf("The area of b is %p\n", pb);

    printf("Time is %s\n", ctime(&tp));

    return 0;
}

/*
�קK�X�ݬ���l�ƪ����w
��]�b���ŧi�@�ӫ��w�ܼƫ�, �o�������T���Ѧ��ܼƦa�}��, �|�o�͸ӫ��w�ܼƥh�H���ѦҬY��address,
��o��address�O�t�ΩҾ֦���,�Y��ȵ��ӫ��w�ܼƷ|��������{��, �B�|�y�����ƽ�Ȫ����p
���Y���H�����t���a�}�O�X�k���ɭ�, �S��Ȯɥi��|�y�����ƽ�ȳo��Ʊ��o��, �o�O�޿�s�{�W�����~�P���~
�d��:

int main()
{
    int *a; //�D�`�M�I���Ϊk
    *a = 12;
    return 0;
}



*/
