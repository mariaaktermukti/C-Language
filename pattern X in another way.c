#include <stdio.h>

int main() {
    int size;

    printf("Enter the size for the X shape: ");
    scanf("%d", &size);

    // Ensure the size is at least 2 to properly form an "X" shape
    if (size < 2) {
        printf("Please enter a number greater than or equal to 2.\n");
    } else {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                // Print '*' for the diagonals from top left to bottom right and top right to bottom left
                if (i == j || i + j == size - 1) {
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

