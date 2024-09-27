/* Write a program in C to count the number of words in a string.
Sample Input             Sample Output
“My name is andy”         4

“Abc 123 7&*&*”           3
*/
#include<stdio.h>
int main(){
 char str[100];
 puts("Enter a string ");
 gets(str);

 int space_count=0;
 for(int i=0;str[i]!='\0';i++){
   if(str[i]==' ')
    space_count++;
}

printf("Space_count = %d",space_count);

return 0;

}
