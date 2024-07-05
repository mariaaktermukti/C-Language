#include<stdio.h>
int main(){
 int n;
 printf("Enter the size of array n :");
 scanf("%d",&n);
int even=0,odd=0;
 int ar[n];
 printf("\nArray elements are :");
  for (int i=0;i<n;i++){
    scanf("%d",&ar[i]);
  }
 for(int i=0;i<n;i++){
    if(ar[i] % 2 == 0)
        even=even+1;
    else
        odd=odd+1;
 }
 printf("\nEven elements are = %d",even);
printf("\nOdd elements are = %d",odd);




}
