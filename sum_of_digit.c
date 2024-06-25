#include<stdio.h>

int main() {
    int num, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10; // Get the last digit
        sum = sum + rem; // Add the last digit to sum
        num = num / 10; // Remove the last digit from num
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}

