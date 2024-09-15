#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  puts("Enter a string:");
  scanf("%[^\n]s",str); // %[^\n] can count space also
//   puts("The reverse is :");
puts("The size is :");

  int size=0;
  int i=0;
  while(str[i]!=0){
      size++;
      i++;
  }
  printf("%d", size);
}
