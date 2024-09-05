#include <stdio.h>
int combination(int n, int r);
int factorial(int x);

int combination(int n, int r){
    int nCr=factorial(n)/(factorial(r)*factorial(n-r));
    return nCr;
}
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main() {
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int iCj= combination(i,j);
            printf("%d",iCj);
        }
        printf("\n");
    }
    return 0;
}
