#include <stdio.h>
int add(int a, int b);
int product(int a,int b);

int add(int a, int b){
    int add=a+b;
}
int product(int a,int b){
    int product=a*b;
}
int main() {
    int a,b;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    printf("Sum = %d\n ",add(a,b));
     printf("Product = %d ",product(a,b));
    return 0;
}
