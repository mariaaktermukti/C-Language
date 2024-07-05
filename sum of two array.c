#include<stdio.h>
int main(){
 int ar1[5],ar2[5],sumAr[5];
printf("ar1 is :");
 for(int i=0;i<5;i++){
    scanf("%d",&ar1[i]);
 }
printf("ar2 is :");
 for(int i=0;i<5;i++){
    scanf("%d",&ar2[i]);
 }
 for(int i=0;i<5;i++){
    sumAr[i]=ar1[i]+ar2[i];
 }
 printf("SumArray elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element at index %d is = %d\n", i, sumAr[i]);
    }

}
