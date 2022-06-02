#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int max = 0;
    int arr[6] = {100, 54, 51, 800, 10, 387};
    int min = arr[0];
    // for largest element
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // for smallest element
    for (int j = 1; j < 6; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }

    printf("max is %d\n", max);
    printf("min is %d\n", min);
    return 0;
}