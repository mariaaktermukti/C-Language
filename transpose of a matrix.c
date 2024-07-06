#include<stdio.h>
int main(){
 int ar[3][5];

 printf("2D array is :\n");

 for(int i=0;i<3;i++){
    for(int j=0;j<5;j++){
        scanf("%d", &ar[i][j]);
    }
 }
 printf("traspose matrix is :\n");
 for(int i=0;i<5;i++){
    for(int j=0;j<3;j++){
        printf("%d ", ar[j][i]);
    }
    printf("\n");
 }

}

