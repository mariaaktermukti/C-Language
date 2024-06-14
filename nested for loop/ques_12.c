/* WAP that will print a pattern based on the input odd integer n. Please see the sample
input output.
Sample input           Sample output

9                         ____*
                          ___***
                          __*****
                          _*******
                          *********
                          _*******
                          __*****
                          ___***
                          ____*

3                            _*
                             ***
                             _*

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer n: ");
    scanf("%d", &n);

    int middle = (n / 2) + 1;

    for (int i = 1; i <= middle; i++) {
        for (int j = 1; j <= middle - i; j++) {
            printf("_");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    for (int i = middle - 1; i >= 1; i--) {
        for (int j = 1; j <= middle - i; j++) {
            printf("_");
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

