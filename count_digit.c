#include<stdio.h>
int main(){
 int number,x;
 printf("Enter a number :");
 scanf("%d",&x);
 int count=0;

 while(x!=0){
    x=x/10;
    count++;
 }
 printf("total digit = %d",count);


}
