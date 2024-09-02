#include <stdio.h>
int main() {
   int r,c,k;
   printf("Enter the number of rows :");
   scanf("%d",&r);
   printf("Enter the number of columns :");
   scanf("%d",&c);

   for(int i=1;i<=r;i++){
        int k=7-i;
       for(int j=1;j<=c;j++){
           if(j<=8-i){
            printf("%d ",k);
            k--;
           }
            else
             printf(" ");
       }
       printf("\n");
   }

     return 0;
}
