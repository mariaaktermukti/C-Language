#include<stdio.h>
int main(){
 int n;
 printf("Enter the size of pattern n:");
 scanf("%d",&n);

 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){

            printf("*",j);

    }
    printf("\n");
 }
return 0;
}
