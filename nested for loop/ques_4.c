/* WAP that will print a pattern based on the input integer n. Please see the sample input
output.
Sample input                   Sample output
3                              __1
                               _22
                               333

5                            ____1
                             ___22
                             __333
                             _4444
                            55555

*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // Print leading underscores
        for (int j = 0; j < n - i; j++)
        {
            printf("_");
        }
        // Print the number `i`, `i` times
        for (int j = 0; j < i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}

