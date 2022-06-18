// 1st pattern

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <math.h>
// #include <time.h>
// int main()
// {
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = 7 - i; j > 0; j--)
//         {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }

//     return 0;
// }

//2nd pattern

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (j >= i)
            {
                printf("%d ", i); // changing the number of spaces will fetch you more different patterns
            }
            else
            {
                printf("  "); // here also changing the number of spaces fetches more different patterns
            }
        }
        printf("\n");
    }

    return 0;
}