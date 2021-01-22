#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
十進位轉十六進位
10 -> 16
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
1 2 3 4 5 6 7 8 9 a  b  c  d  e  f  10 11 12


int main()
{
  int i;
  printf("Please input decimalism number:\n");
  scanf("%d", &i);
  printf("The hex number is %x\n", i);
  return 0;
}

*/

/*
N進位制轉十進位
!! Unfinish 有bug !!


int main()
{
  long t1;
  int i, n, t, t3;
  char a[100];
  printf("Please input a number string:\n");
  gets(a); //從輸入N進位存到數組a裡面
  strupr(a); //將數組內的小寫字母轉為大寫字母
  t3 = strlen(a);
  t1 = 0;
  printf("Please input n (2 or 8 or 16):\n");
  scanf("%d", &n);
  for (i=0; i<t3; i++)
  {
    //判斷輸入的數據和進位制數是否相等
    if (a[i] - '0' >= n && a[i] < 'A' || a[i] - 'A' +10 >=n)
    {
      printf("Data Error!!\n");
      exit(0);
    }

    if (a[i] >= '0' && a[i] <= '9')
      t = a[i] - '0';
    else if (n >= 11 && (a[i] >= 'A' && a[i] <= 'A' + n -10))
      t = a[i] - 'A' + 10;
    t1 = t1*n+t;
  }
  printf("The decimalis: %ld\n", t1);
  return 0;
}
*/

/*
IP地址形式輸出
*/

//將二進制轉為十進制
int bin_dec(int x, int n)
{
  if (n == 0)
    return 1;
  return x*bin_dec(x, n-1);
}

int main()
{
  int i;
  int ip[4] = {0};
  char a[33];

  printf("Please input binary number:\n");
  scanf("%s", a);
  for (i=0; i<8; i++)
  {
      if (a[i] == '1')
      {
        ip[0] += bin_dec(2, 7-i);
      }
  }

  for (i=8; i<16; i++)
  {
    if (a[i] == '1')
    {
      ip[1] += bin_dec(2, 15-i);
    }
  }

  for (i=16; i<24; i++)
  {
    if (a[i] == '1')
    {
      ip[2] += bin_dec(2, 23-i);
    }
  }

  for (i=24; i<32; i++)
  {
    if (a[i] == '1')
    {
      ip[3] += bin_dec(2, 31-i);
    }
    if (a[i] == '\0')
    {
      //'\0'代表結尾
      break;
    }
  }
  printf("IP:%d.%d.%d.%d\n", ip[0], ip[1], ip[2], ip[3]);
  return 0;
}
