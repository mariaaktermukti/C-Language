/* WAP that will print a pattern based on the input integer n. Please see the sample input
output.
Sample input                     Sample output
3                                  3
                                   32
                                   321

4                                  4
                                   43
                                   432
                                   4321

*/

#include<stdio.h>
int main()
{

    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=n; i>=1; i--)
    {
        for(int j=n; j>=i; j--)
        {
            printf("%d",&j);
        }
        printf("\n");
    }
    return 0;
}
