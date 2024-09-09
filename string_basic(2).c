
#include <stdio.h>
int main() {
   char ar[]="Hello world!";
   int i=0;
   while(ar[i]!=0){
       printf("%c ",ar[i]);
       i++;
   }
   return 0;
}
