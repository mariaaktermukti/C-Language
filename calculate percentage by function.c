#include<stdio.h>

int calPercentage (int math, int physics, int chemistry);

int main(){
 int math,physics,chemistry;
 printf("Enter the marks of math, physics and chemistry : ");
scanf("%d %d %d",&math,&physics,&chemistry);

printf("Percentage is = %d ", calPercentage(math,physics,chemistry));
return 0;
}
int calPercentage(int math, int physics, int chemistry){
return (math+physics+chemistry)/3;
}
