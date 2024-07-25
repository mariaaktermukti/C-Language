#include<stdio.h>
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j==1 || j==n ||(i<=n/2+1)|| (j=n+1-i)){
            printf("*");
            }

            else{
                 printf(" ");
            }

        }

    }
      printf("\n");
 }


