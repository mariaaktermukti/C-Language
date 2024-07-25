#include <stdio.h>

int main() {
    int size;

    printf("Enter the size for the Y shape: ");
    scanf("%d", &size);

    // Ensure the size is an odd number to properly form a "Y" shape
    if (size % 2 == 0) {
        printf("Please enter an odd number.\n");
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // Print '*' for the upper arms and the middle bottom part
                if ((i < size / 2 && (j == i || j == size - 1 - i)) ||
                    (i >= size / 2 && j == size / 2)) {
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

