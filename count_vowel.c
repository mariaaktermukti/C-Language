/* WAP that will take n alphabets into an array, and then count number of vowels in that array.

Sample input	                            Sample output
7
AKIOUEH	                                    Count: 5
29
UNITEDINTERNATIONALUNIVERSITY	            Count: 13
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    char ar[n+1];

    printf("Enter the alphabets: ");
    scanf("%s", ar);

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        char ch = ar[i];
        if (ch == 'A' || ch == 'a' ||
            ch == 'E' || ch == 'e' ||
            ch == 'I' || ch == 'i' ||
            ch == 'O' || ch == 'o' ||
            ch == 'U' || ch == 'u')
        {
            count++;
        }
    }

    printf("Count: %d\n", count);

    return 0;
}

