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
    printf("原先有char a = %c, int f = %d\n", a, f);
    printf("*pa拿了&a地址 = %c\n", *pa);
    printf("*pb拿了&f地址 = %d\n", *pb);

    printf("\n針對指標變數做賦值,改變地址原先的值...\n");
    *pa = 'C';//透過*ptr去對地址的值做賦值操作
    *pb += 1;//代表原先的變數a, f也被改變了值

    printf("now, a = %c\n", a);
    printf("now, f = %d\n", f);
    printf("now, *pa = %c\n", *pa);//印出操作後的結果
    printf("now, *pb = %d\n", *pb);//透過指針 進階訪問

    printf("\n取得Sizeof pa & pb<Size of 指的是變數能被容納、儲存的空間>\n");
    printf("sizeof pa = %d\n", sizeof(pa)); //指針地址的長度size, 因為是數字地址, 通常會等於4
    printf("sizeof pb = %d\n", sizeof(pb));

    printf("\n要取得變數所在的地址,請使用%%p作為輸出格式...\n");
    printf("The area of a is %p\n", pa);
    printf("The area of b is %p\n", pb);

    printf("\n時間類型time_t tp\n");
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
