#include <stdio.h>
#include <stdlib.h>

typedef struct myClass myClass;
struct myClass {
  //char name;
  int num; //student number
  int age;
  char group; //Class group ex: A, B, C, D, E
  int score_1; //Subject Score
  //int score_2;
  //int score_3;
  //int score_4;
};

int main() {
  myClass instance_A;
  //instance_A.name = "Albert";
  instance_A.num = 19008421;
  instnace_A.age = 28;
  instnace_A.group = 'A';
  instance_A.score_1 = 99;

  printf("Age: %d\n", instance_A.age);
  return 0;
}
