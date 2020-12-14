#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;
    int copyX = 0;
    copyX = x;
    printf("Copy Value x : %d\n", copyX);
    printf("Copy MemoryAddr x : %x\n", &copyX);
    printf("Real Value x : %d\n", x);
    printf("Real MemoryAddr x : %x\n", &x);
}

/*
從此範例中可以得知，雖然兩者x & copyX數值皆為10
但是copyX的Value來自於x，數值雖然一樣，但是在記憶體位址上來說，絕對不會是一致的!
*/
