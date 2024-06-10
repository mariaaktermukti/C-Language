/*  WAP that will take n positive integers into an array A. Now find all the integers that are
divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
*
Sample input                 Sample output
8
7 8 1 3 2 6 4 3              7 8 1 -1 2 -1 4 -1

3
3 2 1                        -1 2 1

*/

#include<stdio.h>
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);

 int arA[n];

 for(int i=0;i<n;i++){
    scanf("%d",&arA[i]);
 }
 for(int i=0;i<n;i++){
    if(arA[i]%3==0){
        arA[i]=-1;
    }

printf(" %d",arA[i]);
 }

return 0;

}
