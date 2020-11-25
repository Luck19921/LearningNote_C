#include <stdio.h>
#include <time.h> //time
#include <fcntl.h> //O_WRONLY

int main()
{
    char a = 'F';
    int f = 123;
    time_t tp;

    char *pa = &a; //宣告好指針變數與對應的變量值
    int *pb = &f; //*指針代表的是參考到的地址(取地址), &代表的是參考到的值(取值)

    time(&tp);

    printf("a = %c\n", *pa);
    printf("f = %d\n", *pb);

    *pa = 'C';//透過*ptr去對地址的值做操作
    *pb += 1;

    printf("now, a = %c\n", *pa);//印出操作後的結果
    printf("now, f = %d\n", *pb);//透過指針 進階訪問

    printf("sizeof pa = %d\n", sizeof(pa)); //指針地址的長度size, 因為是數字地址, 通常會等於4
    printf("sizeof pb = %d\n", sizeof(pb));

    printf("The area of a is %p\n", pa);
    printf("The area of b is %p\n", pb);

    printf("Time is %s\n", ctime(&tp));

    return 0;
}

/*
避免訪問為初始化的指針
原因在於當宣告一個指針變數後, 卻未給予確切參考變數地址時, 會發生該指針變數去隨機參考某個address,
當這個address是系統所擁有時,若賦值給該指針變數會報錯中止程序, 且會造成重複賦值的狀況
但若當隨機分配的地址是合法的時候, 又賦值時可能會造成重複賦值這件事情發生, 這是邏輯編程上的錯誤與失誤
範例:

int main()
{
    int *a; //非常危險的用法
    *a = 12;
    return 0;
}



*/
