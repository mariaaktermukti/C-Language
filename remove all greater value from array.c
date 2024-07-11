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
for(int i=0; i<n; i++){
        if(ar[i]>50){
            for(int j=i; j<n-1; j++){
                ar[j]=ar[j+1];
            }
            n--;
       i--;
       }
    }

    //after deleting
     for(int i=0; i<n; i++){
        printf("%d ",ar[i]);
    }
    return 0;

}
