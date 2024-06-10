#include <stdio.h>
#include <ctype.h>

int main() {
    char s1[50];
    printf("Enter a string :");
   fgets(s1,sizeof(s1),stdin);
    int length = sizeof(s1) / sizeof(s1[0]);

    for (int i = 0; i < length; i++) {
        if (i == 0 || isspace (s1[i-1])) {
            s1[i] = toupper(s1[i]);
        }
    }

    printf("%s\n", s1);

    return 0;
}
