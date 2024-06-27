#include<stdio.h>
int main(){
 int num;
 printf("Enter number :");
 scanf("%d",&num);
 int reversed_number=0;
 while(num>0){
    int digit=num%10;
    reversed_number=reversed_number*10+digit;
    num=num/10;
 }
 printf("Reversed_number = %d\n",reversed_number);
}
