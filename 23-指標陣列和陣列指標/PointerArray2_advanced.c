#include <stdio.h>

int main()
{
    char *p1[5] = {
        "�y�l1",
        "�y�l2",
        "�y�l3",
        "�y�l4",
        "�y�l5"
    };
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", p1[i]);
    }

    return 0;
}
