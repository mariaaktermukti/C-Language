#include <stdio.h>

int func_check1(int n);
int func_check2(int n);
// int final_check(n);

int func_check1(int n){
    int sum=0,fd;
    while(n!=0){
        int digit= n% 10;
        sum=sum+digit;
        n=n/10;
        if(n==0) fd= digit;
    }
    if(fd ==1 && (sum*sum) & 8 ==0) return 1;
    else return 0;
}

int func_check2(int n){
    for(int i=2;i<=n/2;i++){
        if(n% i == 0) return 0;
    }
    return 1;
}

int final_check(int n){
    int check1=func_check1(n);
    int check2=func_check2(n);
    if( check1==1 && check2==1)return 1;
    else return 0;
}

int main() {
    int n;
   printf("Enter the ranges:\n");
    int high,low; scanf("%d %d",&low, &high);
    for(int n=low; n<=high;n++){
    int c=final_check(n);
    if(c==1) printf("%d is a magical number.\n",n);
    else printf("%d is not a magical number.\n",n);
    }
    return 0;
}
