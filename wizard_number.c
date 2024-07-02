#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;
    int allOddDigits = 1;  // Assume all digits are odd

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {  // Check if the digit is even
            allOddDigits = 0;  // Not a wizard number if any digit is even
        }
        sum += digit;
        num /= 10;
    }

    if (allOddDigits && (sum % 2 != 0)) {
        printf("%d is a wizard number\n", originalNum);
    } else {
        printf("%d is not a wizard number\n", originalNum);
    }

    return 0;
}
