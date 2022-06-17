#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int powing(int numm, int poww)
{
    int n = numm;
    for (int i = 1; i < poww; i++)
    {
        n = n * numm;
    }
    printf("the value is %d", n);
}
int main()
{
    printf("enter the number to find out the power\n");
    int num;
    scanf("%d", &num);
    printf("enter the power to be given\n");
    int pow;
    scanf("%d", &pow);
    powing(num, pow);
    return 0;
}