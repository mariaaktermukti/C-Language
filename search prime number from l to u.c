#include<stdio.h>
int main(){
 int num1,num2;
 printf("Enter num1 from num2 to find the prime number :");
 scanf("%d %d",&num1,&num2);
int i,j;
 for(int i=num1+1;i<num2;i++ ){
    for(int j=2;j<=i;j++){
        if(i % j ==0)
            break;
    }
    if(i==j)
        printf("%d",j);
 }
}
