#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("enter the number upto which the sum you want\n");
    scanf("%d", &num);
    // int a = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     a += i;
    // }

    // OR

    int a;
    a = (num * (num + 1)) / 2;
    printf("the sum is %d\n", a);
    return 0;
}
