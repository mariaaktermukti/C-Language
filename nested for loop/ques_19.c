#include<stdio.h>
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);
 int i,j,k;
for(i=1;i<=n;i++){
        k=1;
    for(j=1;j<=2*n-1;j++){
        if(j>=n-i+1 && j<=n-1+i){
            printf("%d",k);
            j<n ? k++ : k--;
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}
return 0;
}
