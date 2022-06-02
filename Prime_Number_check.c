#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int c = 0;
    printf("enter the number to check\n");
    int num;
    scanf("%d", &num);
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            c += 1;
        }
    }
    if (c != 0)
    {
        printf("the number is not a prime number\n");
    }

    else
    {
        printf("the number is a prime number\n");
    }

    return 0;
}