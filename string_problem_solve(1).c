/*Write a program in C to find the length of a string without using any library function.

Sample Input             Sample Output
“My name is andy”         15
“Abc 123 7&*&*”           13

*/
#include<stdio.h>
int main(){
char str1[10000];
puts("Enter the string : ");
gets(str1);
 int length=0;
for(int i=1;str1[i]!='\0';i++){
    length++;
}

printf("Length is = %d",length);


}
