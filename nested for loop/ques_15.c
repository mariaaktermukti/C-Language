/* WAP that will print a pattern based on the input odd integer n. Please see the sample
input output.
Sample input             Sample output

5                         ZZZZZ
                             Z
                            Z
                           Z
                          ZZZZZ

7                         ZZZZZZZ
                               Z
                              Z
                             Z
                            Z
                           Z
                          ZZZZZZZ

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the Z: ");
    scanf("%d", &n);



    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == (n - i + 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}








