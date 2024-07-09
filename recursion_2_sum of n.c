#include<stdio.h>

int sumofn(int n);
int sum;
int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    printf("Sum is = %d",sumofn(n));
    return 0;
}

int sumofn(int n){
 if(n==0){
    return 0;
 }
 int sumofnm1= sumofn(n-1);
 int sumn=sumofn(n-1)+n;
return sumn;
}
