#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");

    scanf("%[^\n]s", str);
    printf("The size is: ");
    int size = 0;
    int k = 0;
    while (str[k] != '\0') {
        size++;
        k++;
    }
    printf("%d\n", size);

// for(int i=0;j=size-1;i<=j;i++;j--){

// }

int i = 0, j = size - 1;
while (i <= j) {
    char temp= str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}
printf("Reverse string is :");
puts(str);

    return 0;
}
