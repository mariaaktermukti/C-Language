#include <stdio.h>
#include<string.h>
int main() {
   char str[]="Mukti's Dream car is Mercedes-Benz.";
   char *p =str;
   *p='S';
   printf("%s", str);
    return 0;
}
