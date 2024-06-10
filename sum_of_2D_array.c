
/*Wap that will take n integer numbers in an array, n different integer numbers in a second array and put the sum of the same indexed numbers from the two arrays in a third array.


Sample input	     Sample output
5
1 2 3 4 5
2 8 3 4 8	         3 10 6 8 13

8
2 8 3 9 0 1 6 10
5 1 4 8 9 3 1 5	      7 9 7 17 9 4 7 15

*/

#include<stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);

    int ar1[n],ar2[n],ar3[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar1[i]);
    }
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar2[i]);
    }

    for(int i=0; i<n; i++)
    {
        ar3[i]=ar1[i]+ar2[i];
    }

for (int i=0;i<n;i++){
    printf("%d ",ar3[i]);
}

printf("\n");
return 0;
}
