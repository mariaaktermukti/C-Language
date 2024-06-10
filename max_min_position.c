/* WAP that will take n integer numbers into an array, and then find the maximum -minimum among them with its index position.

Sample input	        Sample output
5
1  2  3  4  5	        Max: 5, Index: 4
                        Min: 1, Index: 0
6
2  8  3  9  0  1	    Max: 9, Index: 3
                        Min: 0, Index: 4
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    int maxIndex = 0;
    int minIndex = 0;

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    printf("Max: %d, Index: %d\n", max, maxIndex);
    printf("Min: %d, Index: %d\n", min, minIndex);

    return 0;
}

