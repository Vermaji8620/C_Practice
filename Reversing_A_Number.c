#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    printf("Enter a number to reversen\n");
    int num;
    int b = 0;
    scanf("%d", &num);
    int n = num;
    while (n != 0)
    {
        int r = n % 10;
        b = (b * 10) + r;
        n /= 10;
    }
    printf("the reversed number is %d\n", b);

        return 0;
}