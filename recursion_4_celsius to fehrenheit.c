#include<stdio.h>

float convertTemp(float C);

int main(){
    float c;
    printf("Enter c :");
    scanf("%f",&c);
 float F=convertTemp(c);
 printf("Fahrenheit temperature is = %f ",F);
 return 0;
}

 float convertTemp(float C){
     float F=C *(9/5) +32;
     return F;
 }
