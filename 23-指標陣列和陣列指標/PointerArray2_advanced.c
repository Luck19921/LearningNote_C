#include <stdio.h>

int main()
{
    char *p1[5] = {
        "句子1",
        "句子2",
        "句子3",
        "句子4",
        "句子5"
    };
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", p1[i]);
    }

    return 0;
}
