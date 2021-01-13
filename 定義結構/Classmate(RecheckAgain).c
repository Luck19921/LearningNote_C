#include <stdio.h>
#include <stdlib.h>

//typedef 架構classFormat與宣告內部成員變數後 也叫作myClass
//若_classFormat處為空，必須在架構尾端加上所告的架構變數名稱(ex: myClass)
typedef struct _classFormat {
  char *name;
  int num; //student number
  int age;
  char group; //Class group ex: A, B, C, D, E
  int score_1; //Subject Score
  int score_2;
} myClass;

/*
//這樣宣告也可以
typedef struct {
  char *name;
  int num; //student number
  int age;
  char group; //Class group ex: A, B, C, D, E
  int score_1; //Subject Score
  int score_2;
} myClass;
myClass class_1;
*/

int main() {
  myClass instance_A; //宣告instance_A變數為myClass架構型態
  /* 如下宣告也可以使用 */
  //struct _classFormat instance_A;

  //有myClass屬性後，底下的name num age group...等都是架構成員(變數)
  //myClass是一個strcut屬性的架構
  instance_A.name = "Albert";
  instance_A.num = 19008421;
  instance_A.age = 28;
  instance_A.group = 'A';
  instance_A.score_1 = 99;
  instance_A.score_2 = 88;

  printf("Name: %s\n", instance_A.name);
  printf("Student Number: %d\n", instance_A.num);
  printf("Student Age: %d\n", instance_A.age);

  struct _classFormat instance_B;
  //加上結構型態修飾在前
  instance_B.name = "Test2";
  instance_B.age = 18;

  printf("instance_B.name: %s\n", instance_B.name);
  printf("instance_B.age: %d\n", instance_B.age);

  return 0;
}
