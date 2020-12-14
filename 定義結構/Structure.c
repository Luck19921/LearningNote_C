#include <stdio.h>
#include <stdlib.h>

typedef const char* String;

struct Account {
  String id;
  String name;
  double balance;
};

void printAcct(struct Account acct) {
  printf("Account(%s, %s, %f)\n", acct.id, acct.name, acct.balance);
}

int main()
{
  struct Account acct;
  struct Account acct2 = {.balance = 1020, .name = "Yagoo Cheng", .id = "080-080-000"};
  struct Account acct3[] = {
                          {.balance = 100, .name = "Mr.Poor", .id = "000-000-001"},
                          {.name = "Mr.Middle", .id = "555-555-555", .balance = 5568},
                          {.balance = 1000000, .name = "Mr.Rich", .id = "999-999-990"}
                          };
  int lengthAC = sizeof(acct3) / sizeof(acct3[0]); //Find the length of array
  printf("LengthAC: %d\n", lengthAC);
  acct.id = "123-456-789";
  acct.name = "Albert Cheng";
  acct.balance = 9999;
  printAcct(acct);
  printAcct(acct2);

  for (int i = 0; i < lengthAC; i ++) {
    printAcct(acct3[i]);
  }
  return 0;
}

/*
定義結構:
創造一個結構類別，相當於Java中Class的概念，你可以自定義這個Class的底下有哪些成員與其屬性
例如String屬性的id成員, String屬性的name成員, double屬性的balance成員
acct則是根據Account結構(struct)所建立的實例

宣告方式也可以先建立實例後，一一將成員帶出並賦予值(acct)
也可以使用第二種方式，宣告同時初始化，過程可以不用按照成員順序(acct2)
p.s. 在定義建構時，就已經決定好其各成員的順序了
可以一次宣告並初始化多組資料(acct3)

測量Array的方法:
假設我們有一個Array => myList[?]
容量(sizeof)與長度(length)是不同的東西
可以裝多少東西與目前現有裝了多長的單位

int Length = sizeof(myList) / sizeof(myList[0]);
*/
