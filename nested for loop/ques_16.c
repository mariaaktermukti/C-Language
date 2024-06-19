/* WAP that will print a pattern based on the input odd integer n. Please see the sample
input output.
Sample input             Sample output
5                          *___*
                           _*_*_
                           __*__
                           _*_*_
                           *___*

7                         *_____*
                          _*___*_
                          __*_*__
                          ___*___
                          __*_*__
                          _*___*_
                          *_____*

*/

#include<stdio.h>
int main(){
 int n;
 printf("Enter n :");
 scanf("%d",&n);

 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       if(i==j || i+j==n+1)
        printf("*");
        else
            printf("_");


    }
    printf("\n");
 }
 return 0;
}
