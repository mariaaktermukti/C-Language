#include<stdio.h>
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
   int num=1,i=1;
   while(i<=n){
       printf("%d ",num);
       num=num+2;
       i++;
   }
}
