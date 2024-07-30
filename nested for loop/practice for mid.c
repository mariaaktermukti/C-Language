#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of alphabate array : ");
    scanf("%d",&n);
    char arr[n+1];
    printf("Enter an alphabet :");
    scanf("%s",arr[n]);

    int count=0;
    for(int i=0; i<n; i++)
    {
        char ch=arr[i];
             if( ch == 'a'|| ch == 'A'||
                ch == 'e'|| ch == 'E'||
                ch == 'i'|| ch == 'I'||
                ch == 'o'|| ch == 'O'||
                ch == 'u'|| ch == 'U')
        {
            count++;
        }

    }
    printf("count = %d\n",count);


}
