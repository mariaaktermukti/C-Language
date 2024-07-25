#include <stdio.h>

int main() {
    int size;

    printf("Enter the size for the N shape: ");
    scanf("%d", &size);

    // Ensure the size is at least 2 to properly form an "N" shape
    if (size < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // Print '*' for the first column, last column, and the diagonal from top left to bottom right
                if (j == 0 || j == size - 1 || i == j) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;
}

