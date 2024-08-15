#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of rows :");
    scanf("%d",&m);
    printf("Enter the number of column :");
    scanf("%d",&n);

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
 return 0;
}
