#include <stdio.h>

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("number is positive\n");
    }
    else {
        printf("number is negative\n");
    }

    return 0;
}

