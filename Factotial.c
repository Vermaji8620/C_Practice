#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    printf("enter number\n");
    int num;
    scanf("%d", &num);
    int mul = num;
    for (int i = num - 1; i >= 1; i--)
    {
        mul *= (i);
    }
    printf("the factorial for %d is %d\n", num, mul);

    return 0;
}