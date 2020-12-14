static void foo() {
  printf("This is foo...!\n");
}

/*
實作foo()在header file
使用Static修飾該Fucntion
函式使用Static修飾代表內部連結，是不會在其他c file內Extern拉出去連結的
*/
