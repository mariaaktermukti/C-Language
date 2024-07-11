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

 int min=ar[0];
 int minIndex=0;
 for(int i=1;i<n;i++){
    if(min>ar[i]){
        min=ar[i];
        minIndex=i;
    }
 }
    printf("Index %d element %d\n", minIndex, min);

    return 0;
}

