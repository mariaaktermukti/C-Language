#include<stdio.h>

int main() {
    int number, firstdigit, lastdigit;
    int sumOfAll = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    int temp = number;
    lastdigit = number % 10;

    while (temp > 0) {
        sumOfAll += temp % 10;
        if (temp < 10) {
            firstdigit = temp;
        }
        temp /= 10;
    }

    int sumOffirstlastdigit = firstdigit + lastdigit;

    if (sumOffirstlastdigit < 8 && sumOfAll % 6 == 0) {
        printf("%d is a Clipto number\n", number);
    } else {
        printf("%d is not a Clipto number\n", number);
    }

    return 0;
}

