#include <stdio.h>
#include <stdlib.h>

typedef const char* String;
typedef struct Account {
  //以下變數皆被納入Account結構下的成員變數
  String id;
  String name;
  double balance;

  char *_to_str;

  //可以令函式也成為結構成員之一
  void (*deposit)(struct Account*, double);
  void (*withdraw)(struct Account*, double);
  String (*to_str)(struct Account*);
} Account;

void deposit(Account *acct, double amount) {
  printf("Doing deposit %f dollars\n", amount);
  if(amount <= 0) {//當存入金額小於等於零時 錯誤!
      puts("Need to deposit a postive number.");
      return;
  }
  puts("Deposit successfully.");
  acct->balance += amount;
  //如果使用結構宣告的指標變數(acct)來讀取成員, 必須使用->運算子
  //因為傳遞的是結構實例的位址
}

void withdraw(Account *acct, double amount) {
  printf("Doing withdraw %f dollars\n", amount);
  if(amount > acct->balance) {//當取款金額大於剩餘餘額時 錯誤!
      puts("You don't have enough balance.");
      puts("Widthdraw fail.");
      return;
  }
    puts("Withdraw successfully.");
    acct->balance -= amount;
}

String to_str(Account *acct) {
    int n = snprintf(NULL, 0, "Account(%s, %s, %f)", acct->id, acct->name, acct->balance);
    if(acct->_to_str != NULL) {
        free(acct->to_str);
    }

    acct->_to_str = malloc((n + 1) * sizeof(char));
    snprintf(acct->_to_str, n + 1,
        "Account(%s, %s, %f)",
        acct->id, acct->name, acct->balance
    );

    return acct->_to_str;
}

//new_account是Account的實例
Account* new_account (String id, String name, double balance) {
  Account *acct = (Account*) malloc(sizeof(Account));
  //變數成員
  acct->id = id;
  acct->name = name;
  acct->balance = balance;
  acct->to_str = NULL;

  //函式成員
  acct->deposit = deposit;
  acct->withdraw = withdraw;
  acct->to_str = to_str;
  return acct;
}

//Releasing memory storage
void del_account(Account *acct) {
  free(acct->to_str);
  free(acct);
}

int main() {
  Account *acct = new_account("123-123-123", "Yamasaki", 1000);
  acct->deposit(acct, 700);
  acct->withdraw(acct, 200);
  printf("%s\n", acct->to_str(acct));
  del_account(acct); //release memory storage
  return 0;
}
