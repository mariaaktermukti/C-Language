#include<stdio.h>
int main(){
 int ar[3][5],sum=0;

 printf("2D array is :\n");

 for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        scanf("%d", &ar[i][j]);
    }
 }
 printf("2D array is:\n");
 for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        printf("%d ", ar[i][j]);
        sum=sum+ar[i][j];
    }
    printf("\n");
 }

printf(" Sum of all elements = %d\n",sum);

}
