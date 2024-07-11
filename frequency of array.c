#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of array n: ");
    scanf("%d", &n);

    int a[n], f[n];

    printf("Enter the elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        f[i] = -1; // Initialize frequency array with -1
    }

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                f[j] = 0; // Mark as counted
            }
        }
        if (f[i] != 0) {
            f[i] = count; // Update frequency count if not marked
        }
    }

    printf("\nFrequency of all elements of array:\n");
    for (int i = 0; i < n; i++) {
        if (f[i] != 0) {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
    }

    return 0;
}

