#include<stdio.h>

void main()
{
    // char name[] = "mr.game"
    char name[] = ('m','a','r','k','\10');

    printf("my name is %s", name);
}