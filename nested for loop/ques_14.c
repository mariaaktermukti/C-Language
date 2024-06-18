/* WAP that will print a pattern based on the input odd integer n. Please see the sample
input output.
Sample input                         Sample output

5                                     *****
                                      *___*
                                      *****
                                      *___*
                                      *****

3                                     ***
                                      *_*
                                      ***
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter an odd integer n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd integer.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            // Print a row with all asterisks
            for (int j = 1; j <= n; j++) {
                printf("*");
            }
        } else {
            // Print a row with asterisks at the borders and underscores in the middle
            printf("*");
            for (int j = 1; j <= n - 2; j++) {
                printf("_");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

