#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    int num;
    printf("enter the number to find out the binary\n");
    scanf("%d", &num);
    int rem;
    int arr[50];
    int allrem;
    int i = 0;
    int quo = 1;
    while (quo != 0)
    {
        quo = num / 2;
        rem = num % 2;
        allrem = ("%d", rem);
        arr[i] = allrem;
        num = quo;
        i++;
    }

    for (int j = 3; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}
