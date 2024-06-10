#include <stdio.h>

int main() {
    int n, m;

    printf("Enter size of array A (n): ");
    scanf("%d", &n);

    int arA[n];
    printf("Enter %d elements for array A: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arA[i]);
    }

    printf("Enter size of array B (m): ");
    scanf("%d", &m);


    int arB[m];
    printf("Enter %d elements for array B: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arB[i]);
    }

    int minSize = n < m ? n : m;

    for (int i = 0; i < minSize; i++) {
        int temp = arA[i];
        arA[i] = arB[i];
        arB[i] = temp;
    }


    printf("Array A: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arA[i]);
    }
    printf("\n");

    printf("Array B: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arB[i]);
    }
    printf("\n");

    return 0;
}


