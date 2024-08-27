#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of rows and columns: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || j==n+1-i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}
