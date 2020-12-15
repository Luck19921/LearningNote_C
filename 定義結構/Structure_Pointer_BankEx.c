#include <stdio.h>
#include <stdlib.h>

typedef const char* String;
typedef struct Account {
  String id;
  String name;
  double balance;

  char *_to_str;

  //定義架構內的function
  void (*deposit)(struct Account*, double);
  void (*withdraw)(struct Account*, double);
  String (*to_str)(struct Account*);
} Account;

void deposit(Account *acct, double amount) {
  printf("Doing deposit %f dollars\n", amount);
  if(amount <= 0) {
      puts("Need to deposit a postive number.");
      return;
  }
  puts("Deposit successfully.");
  acct->balance += amount;
}

void withdraw(Account *acct, double amount) {
  printf("Doing withdraw %f dollars\n", amount);
  if(amount > acct->balance) {
      puts("You don't have enough balance.");
      puts("Widthdraw fail.");
      return;
  }
    puts("Withdraw successfully.");
    acct->balance -= amount;
}

Account* new_account (String id, String name, double balance) {
  Account *acct = (Account*) malloc(sizeof(Account));
  acct->id = id;
  acct->name = name;
  acct->balance = balance;

  acct->deposit = deposit;
  acct->withdraw = withdraw;

  return acct;
}

int main() {
  Account *acct = new_account("123-123-123", "Yamasaki", 1000);
  acct->deposit(acct, 700);
  acct->withdraw(acct, 200);
  //printf("%s\n")
  return 0;
}
