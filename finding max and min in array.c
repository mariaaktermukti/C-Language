#include<stdio.h>
int main(){
 int n,i;
 printf("Enter the size of array n :");
 scanf("%d",&n);

 int ar[n];

 printf("Enter the elements of array : ");
 for(int i=0;i<n;i++){
    scanf("%d",&ar[i]);
 }

 int max=ar[0];
 int maxIndex=0;
 for(int i=1;i<n;i++){
    if(max<ar[i]){
        max=ar[i];
        maxIndex=i;
    }
 }
    printf("Index %d element %d\n", maxIndex, max);

    return 0;
}
