#include <stdio.h>
int main() {
   int r,c,k=0;
   printf("Enter the number of rows :");
   scanf("%d",&r);
   printf("Enter the number of columns :");
   scanf("%d",&c);

   for(int i=1;i<=r;i++){
       if(i<6){
            k++;
       }
       else{
            k--;
       }

       for(int j=1;j<=c;j++){
           if(j>=6-k){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
       printf("\n");
   }

     return 0;
}
