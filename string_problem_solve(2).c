/* Write a program in C to concatenate two strings without using any library function.
Sample Input                Sample Output
“My name ”
“is andy”
                           “My name is andy”

“123abc”
“*A*B”
                                “123abc*A*B”
*/


#include<stdio.h>
int main(){
 char str1[100000],str2[10000];

 puts("enter the 1st string : ");
 gets(str1);

 puts("enter the 2nd string : ");
 gets(str2);

int len=0;
for(int i=0;str1[i]!='\0';i++){
    len++;
}


for(int i=0;str2[i]!='\0';i++){
    str1[len+i]= str2[i];
}
puts(str1);


}
