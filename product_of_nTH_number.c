#include<stdio.h>
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);
 int i=1;
 int product=1;
 while(i<=n){
    product*=i;
     i++;
 }
 printf("product = %d",product);
}
