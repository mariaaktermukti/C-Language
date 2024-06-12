/*  WAP that will print a pattern based on the input integer n. Please see the sample input
output.
Sample input                Sample output

5                           *****
                            ****
                            ***
                            **
                            *

2                           **
                            *

*/

#include<stdio.h>
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);

 for(int i=1;i<=n;i++){
    for(int j=n;j>=i;j--){
        printf("*");
    }
    printf("\n");
    return 0;
 }















}
