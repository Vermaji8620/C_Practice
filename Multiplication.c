#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("enter the number whose multiplication you want\n");
    int num;
    scanf("%d", &num);
    printf("enter the number till which you want\n");
    int till;
    scanf("%d", &till);
    for (int i = 1; i <= till; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}