#include<stdio.h>
int main(){
  int num;
  printf("Enter a number :");
  scanf("%d",&num);
  int rem,sum=0;
  int temp=num;
  while(temp>0){
    rem=temp%10;
    sum=sum+rem*rem*rem;
    temp=temp/10;
  }
  if(num==sum){
    printf("%d is armstrong\n",num);
  }
  else{
    printf("%d is not armstrong\n",num);
  }
}
