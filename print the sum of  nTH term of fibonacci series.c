#include<stdio.h>
int fi(int n);
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);
 printf("%d",fi(n));
 return 0;

}

int fi(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
 int finM1=fi(n-1);
 int finM2= fi(n-2);
 int fiN= finM1+finM2;
 return fiN;

}
