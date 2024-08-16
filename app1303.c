#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "";
    int i;
    printf("enter a string: ");
    gets (str);
    
    int result = strlen(str);
    printf("lent of str:%d\n", result);

    for (i = 0; i <= result -1; i++)
    {
        printf("str[%d] = %c/n", i,str[1]);
    }
    return 0;
}
