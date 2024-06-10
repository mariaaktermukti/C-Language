/* WAP that will take n positive integers into an array A. Now find all the integers that have
an odd index and replace them by 0 in array A. Finally show all elements of array A.

Sample input                 Sample output
8
7 8 1 3 2 6 4 3              7 0 1 0 2 0 4 0

3
3 2 1                        3 0 1

*/

#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arA[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arA[i]);
    }

    for(int i = 0; i < n; i++) {
        if(i % 2 != 0) {
            arA[i] = 0;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arA[i]);
    }
    printf("\n");

    return 0;
}

