#include<stdio.h>
int main(){
 int n,i,index;
 printf("Enter the size of an array n :");
 scanf("%d",&n);
 int ar[n];

 printf("Enter the array :");
 for( i=0;i<n;i++){
    scanf("%d",&ar[i]);
 }
 for( i=0;i<n;i++){
    printf("\nArray element at index %d is : %d",i,ar[i]);
 }
 printf("\nReverse array :\n");
for( i=n-1;i>=0;i--){
    printf(" %d",ar[i]);
}

}
