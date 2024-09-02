#include <stdio.h>
int main() {
   int r,c;
   printf("Enter the number of rows :");
   scanf("%d",&r);
   printf("Enter the number of columns :");
   scanf("%d",&c);
   int k=0;
   for(int i=1;i<=r;i++){
       if(i<=4)
       k++;
       else
       k--;
       for(int j=1;j<=c;j++){
           if(j<=k)
               printf("*");
            else
                printf(" ");

       }
       printf("\n");
   }

     return 0;
}
