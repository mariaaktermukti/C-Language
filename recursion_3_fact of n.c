#include<stdio.h>

int factn(int n);

int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
 printf("Fact is =%d",factn(n));
 return 0;
}

 int factn(int n){
     if(n==0){
         return 1;
     }
     int factnmin1= factn(n-1);
     int factn= factnmin1 *n;
     return factn;
 }
