#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    printf("enter the number");
    int num;
    scanf("%d", &num);
    printf("the num is %d\n", num);
    int rem;
    int c, counting = 0;

    while (num != 0)
    {
        rem = num % 10;
        counting = (counting * 10) + rem;
        c++;
        num = num / 10;
    }
    printf("the number of digits are %d\n", c);
    printf("the reversed number is %d", counting);
    return 0;
}