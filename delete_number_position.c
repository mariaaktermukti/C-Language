/* WAP that will take n integer numbers as input in an array and then delete a number from
a position specified by the user in the array.

 Sample input                                 Sample output
 10
 9 11 34 23 16 15 2 37 89 54                   9 11 34 23 15 2 37 89 54
 position: 4

 5
 32 14 9 48 6                                  14 9 48 6
 position: 0

*/

#include<stdio.h>
int main(){

 int n;
 printf("Enter n :");
 scanf("%d",&n);

 int ar[n];

 for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
 }
  int position;
printf("Enter the position for delete :");
scanf("%d",&position);

  if(position<0 || position>n){
    printf("Invaid option\n");
    return 1;
  }
for(int i=position;i<n+1;i++){
    ar[i]=ar[i+1];
}

    for(int i = 0; i < n - 1; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}
