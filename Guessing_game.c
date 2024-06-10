#include <stdio.h>
int main() {
    int X;
    int guess1, guess2, guess3;
    int correct = 0;

    printf("Player-1, enter your number: ");
    scanf("%d", &X);
    printf("Player-2, enter your first guess: ");
    scanf("%d", &guess1);

    if (guess1 == X) {
        printf("Right, Player-2 wins!\n");
        correct = 1;
    } else {
        printf("Wrong, 2 Chance(s) Left!\n");
        printf("Player-2, enter your second guess: ");
        scanf("%d", &guess2);

        if (guess2 == X) {
            printf("Right, Player-2 wins!\n");
            correct = 1;
        } else {
            printf("Wrong, 1 Chance(s) Left!\n");
            printf("Player-2, enter your third guess: ");
            scanf("%d", &guess3);

            if (guess3 == X) {
                printf("Right, Player-2 wins!\n");
                correct = 1;
            } else {
                printf("Wrong, 0 Chance(s) Left!\n");
            }
        }
    }

    if (!correct) {
        printf("Player-1 wins!\n");
    }

    return 0;
}
