/* WAP that will print a pattern based on the input integer n. Please see the sample input
output.
Sample input               Sample output

4                           ****
                            ****
                            ****
                            ****

2                           **
                            **

*/

#include<stdio.h>
int main(){
  int n;
  printf("Enter n :");
  scanf("%d",&n);

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        printf("*",j);
    }
    printf("\n");
  }
return 0;

}
