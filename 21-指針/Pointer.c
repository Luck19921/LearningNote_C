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
    printf("�����char a = %c, int f = %d\n", a, f);
    printf("*pa���F&a�a�} = %c\n", *pa);
    printf("*pb���F&f�a�} = %d\n", *pb);

    printf("\n�w������ܼư����,���ܦa�}�������...\n");
    *pa = 'C';//�z�L*ptr�h��a�}���Ȱ���Ⱦާ@
    *pb += 1;//�N�������ܼ�a, f�]�Q���ܤF��

    printf("now, a = %c\n", a);
    printf("now, f = %d\n", f);
    printf("now, *pa = %c\n", *pa);//�L�X�ާ@�᪺���G
    printf("now, *pb = %d\n", *pb);//�z�L���w �i���X��

    printf("\n���oSizeof pa & pb<Size of �����O�ܼƯ�Q�e�ǡB�x�s���Ŷ�>\n");
    printf("sizeof pa = %d\n", sizeof(pa)); //���w�a�}������size, �]���O�Ʀr�a�}, �q�`�|����4
    printf("sizeof pb = %d\n", sizeof(pb));

    printf("\n�n���o�ܼƩҦb���a�},�Шϥ�%%p�@����X�榡...\n");
    printf("The area of a is %p\n", pa);
    printf("The area of b is %p\n", pb);

    printf("\n�ɶ�����time_t tp\n");
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
