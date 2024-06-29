#include <stdio.h>

int main() {
    int num;
    int count = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}
