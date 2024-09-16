#include <stdio.h>
#include<string.h>
int main() {
   char str[]="Mukti's Dream car is Mercedes-Benz.";
   char *ptr =str;
   ptr ="Mukti's Dream car is Audi.";
   printf("%s", str);
    return 0;
}
