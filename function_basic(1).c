#include <stdio.h>
void India();
void bangladesh();
void Pakistan();

 void bangladesh(){
     printf("I'm in Bangladesh\n");
     India();
 }
 void India(){
     printf("I'm from India\n" );
     Pakistan();

 }
 void Pakistan(){
     printf("I'm in Pakistan\n");
 }
 void England(){
     printf("I'm in England\n");
     return;
 }
int main() {
  bangladesh();
    return 0;
}
