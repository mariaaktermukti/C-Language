
#include <stdio.h>

int main() {
   int ar[5][5];

   for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           scanf("%d",&ar[i][j]);
       }
   }
printf("\n");
 for(int i=0;i<5;i++){
       for(int j=0;j<5;j++){
           printf("%d ",ar[i][j]);
       }
       printf("\n");
   }

    return 0;
}
