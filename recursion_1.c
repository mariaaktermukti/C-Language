#include<stdio.h>

void printHW(int count);

int main(){
    int n;
    printf("Enter n :");
    scanf("%d",&n);
 printHW(n);
 return 0;
}

 void printHW(int count){
 if (count ==0)
    return;

    printf("Hello World\n");
    printHW(count-1);
 }
