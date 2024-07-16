#include<stdio.h>

void DoWork(int a, int b, int *sum, int *product, int *avg);

int main(){
 int a,b;
 printf("Enter the value of a,b :");
 scanf("%d %d",&a,&b);
 int sum,product,avg;

 DoWork(a,b,&sum,&product,&avg);

 printf("\nSum = %d\n Product = %d\n Average = %d\n", sum,product,avg);
 return 0;
}

void DoWork (int a, int b, int *sum, int *product, int *avg){
 *sum=a+b;
 *product = a*b;
 *avg=(a+b)/2;
}
