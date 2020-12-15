#include <stdio.h>
#include <stdlib.h>

typedef const char* String;
typedef struct Account {
  String id;
  String name;
  double balance;
} Account;

void deposit(Account *acct, double amount) {
  printf("Doing deposit %f dollars\n", amount);
  if(amount <= 0) {
      puts("Need to deposit a postive number.");
      return;
  }
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

int main() {
    Account acct = {"0800-1234", "Albert Cheng", 1000};
    deposit(&acct, 500);
    // withdraw(&acct, 200);
    printf("----<<Account Info>>----\nID:%s\nName:%s\nBalance:%f\n----<<Account Info>>----\n", acct.id, acct.name, acct.balance);

    return 0;
}
