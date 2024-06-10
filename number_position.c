/*  WAP that will take n integer numbers as input in an array and then insert a number in a
position specified by the user in the array.

Sample input                              Sample output
10
9 11 34 23 16 15 2 37 89 54               9 11 34 23 78 16 15 2 37 89 54
number: 78 position: 4

5
32 14 9 48 6                              16 32 14 9 48 6
number: 16 position: 0


*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int ar[n+1];

    printf("Enter the elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int number, position;
    printf("number : ");
    scanf("%d", &number);

    printf("position: ");
    scanf("%d", &position);

    if(position < 0 || position > n)
    {
        printf("Invalid position\n");
        return 1;
    }

    for(int i = n; i > position; i--)
    {
        ar[i] = ar[i - 1];
    }

    ar[position] = number;

    printf("Updated array:\n");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}


