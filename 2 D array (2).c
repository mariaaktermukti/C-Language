#include <stdio.h>
int main() {
   int ar1[5][5] = {{1, 2, 3, 3, 4}, {5, 6, 6, 7, 7},{1, 2, 3, 3, 4}, {5, 6, 6, 7, 7},{1, 2, 3, 3, 4}};
   int ar2[5][5] = {{1, 2, 3, 3, 4}, {5, 6, 6, 7, 7},{1, 2, 3, 3, 4}, {5, 6, 6, 7, 7},{1, 2, 3, 3, 4}};

   int sum[5][5];

   for(int i = 0; i < 5; i++) {
       for(int j = 0; j < 5; j++) {
          sum[i][j] = ar1[i][j] + ar2[i][j];
       }
   }

   printf("\nSum of the two arrays:\n");
   for(int i = 0; i < 5; i++) {
       for(int j = 0; j < 5; j++) {
           printf("%d ", sum[i][j]);
       }
       printf("\n");
   }

   return 0;
}
