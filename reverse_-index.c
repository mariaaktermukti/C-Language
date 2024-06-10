/* WAP that will take n integer numbers into an array, and then reverse all the integers within that array. Finally print them all from 0 index to last valid index.

Sample input	      Sample output
5
1  2  3  4  5	      5  4  3  2  1
6
2  8  3  9  0  1	  1  0  9  3  8  2

*/



#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int rev[n];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }

    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    printf("\n");

    return 0;
}
