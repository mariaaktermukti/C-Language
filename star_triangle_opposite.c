#include <stdio.h>

int main() {
   int n;
   int a;
   printf("Enter the number of rows and columns :");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
           printf(" ");
       }
       for(int k=1;k<=i;k++){
           printf("*");
       }
     printf("\n");
       }

   }
