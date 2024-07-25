#include <stdio.h>

int main() {
    int rows, cols;
    int size = 7; // Size of the H shape (odd number for symmetry)

    // Calculate the dimensions based on the size
    rows = size;
    cols = size;

    // Loop to print the H shape
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0 || j == cols - 1 || (i == rows / 2 && j > 0 && j < cols - 1)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

