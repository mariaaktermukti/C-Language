#include<stdio.h>
void display(int n){
if(n>0){

        printf("%d \n", n);
        display(n-1);
        
    }
}


 
int main(){

int n = 100;

display(n);

    return 0;
}