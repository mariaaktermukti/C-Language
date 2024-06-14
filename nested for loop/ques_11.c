/* WAP that will print a pattern based on the input integer n. Please see the sample input
output.
Sample input                Sample output

5                             ____*
                              ___***
                              __*****
                              _*******
                              *********

3                               __*
                                _***
                                *****

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading underscores
        for (int j = 1; j <= n - i; j++) {
            printf("_");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
