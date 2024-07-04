#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    float avg;

    printf("Enter n: ");
    scanf("%d", &n);

    int marks[n];
    printf("Enter the marks: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += marks[i];
    }

    avg = (float)sum / n;

    printf(" The average is: %.2f\n ", avg);

    return 0;
}

