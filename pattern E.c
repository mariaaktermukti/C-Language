#include <stdio.h>

int main() {
    int size;

    printf("Enter the size for the E shape: ");
    scanf("%d", &size);

    // Ensure the size is at least 3 to properly form an "E" shape
    if (size < 3) {
        printf("Please enter a number greater than or equal to 3.\n");
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // Print '*' for the first column, top row, middle row, and bottom row
                if (j == 0 || i == 0 || i == size / 2 || i == size - 1) {
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

