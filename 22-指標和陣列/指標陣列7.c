/*
���Ъ��B��
������ܼƫ��V�}�C������,�ڭ̥i�H������ܼƶi��[��B��
�o�˰����N�q�۷����V�Z�����ЩҦb��m���V�e�άO�V���n�Ӥ���

char *p;
p = a; //�y�y1
p = &a[0]; //�y�y2
�y�y1 ���P�� �y�y2 ��̨㦳�ۦP����


���зǪ��U�гX�ݼƲդ���,�o�ӨϥΫ��w�i�涡���X�ݪ���k�s�����w�k

p+1�ä��O²�檺�N�a�}+1,�ӬO���V�Ʋժ��U�@�Ӥ���
*/


#include <stdio.h>

int main()
{
    char str[] = {"Albert"};
    char *p = str;
    printf("p = %c, *(p+1) = %c, *(p+2) = %c, *(p+3) = %c\n", *p, *(p+1), *(p+2), *(p+3));

    return 0;
}
