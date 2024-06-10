#include<stdio.h>
int main(){
int x,y;
printf("Enter the number :");
scanf("%d %d",&x,&y);

if(x==y){
    printf("x is equal to y\n ");
}
else if(x>y){
    printf("x is greater then y\n ");
}
else{
    printf("x is less then y\n ");
}
return 0;
}
