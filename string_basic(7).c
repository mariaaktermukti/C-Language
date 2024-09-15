#include<stdio.h>
#include<string.h>
int main(){
 char str[1000];
// scanf("%s",str); // only first word will be considered, space pele line er porer tuku count hobe na.

 gets(str);
 printf("The sentence is :%s",str);

 return 0;
}
