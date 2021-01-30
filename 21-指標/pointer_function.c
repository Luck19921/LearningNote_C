#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *, int *);

int main()
{
  int a=10, b=20; //int變數a & b 賦值
  int *pa, *pb; //創建pa & pb 指標變數
  pa=&a; //pa指向a變數的記憶體位址
  pb=&b; //pb則指向b變數的記憶體位址
  printf("Before using swap function...\n");
  printf("a:%d\n",a);
  printf("b:%d\n",b);
  //swap(pa, pb); //using pointer variables.
  swap(&a, &b); //without using pointer, need to use & to get the memory address of variables.
  printf("After swap function...\n");
  printf("a:%d\n", a);
  printf("b:%d\n", b);
  return 0;
}

/*
pointer function
need to input two variables(with pointer)
ex: int a=10, b=20;
swap(&a, &b);

int *pa = &a;
int *pb = &b;
swap(pa, pb);

*/
void swap(int *sub1, int *sub2)
{
  int tmp;
  tmp=*sub1;
  *sub1=*sub2;
  *sub2=tmp;
}
