#include<stdio.h>
#include<math.h>

float circleArea(float r);

int main(){

float r;
printf("Enter r :");
scanf("%f",&r);
printf("Area is = %f\n", circleArea(r));
return 0;

}

float circleArea(float r){
 return 3.1416*r*r;
}
