/* WAP that will first take n integers into an array A and then m integers into array B. Now
swap all elements between array A and B. Finally show all elements of both array A and B.

 Sample input                Sample output
 8
 7 8 1 3 2 6 4 3              Array A : 3 2 1
 3                            Array B : 7 8 1 3 2 6 4 3
 3 2 1

*/

#include<stdio.h>
int main()
{
    int n,m;

    printf("Enter n :");
    scanf("%d",&n);

    int arA[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arA[i]);
    }

    printf("Enter m :");
    scanf("%d",&m);

    int arB[m];
    for(int i=0; i<m; i++)
    {
        scanf("%d",&arB[i]);
    }

    int minlength;

    if(m>n){
        minlength=n;
    }
    else{
        minlength=m;
    }





}
