#include<Stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    int ar[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int searched_num;
    printf("Enter the number to search :");
    scanf("%d",&searched_num);

    int Found=0;
    printf("Search_num: ");
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == searched_num)
        {
            if (!Found)
            {
                printf("FOUND at index position: %d", i);
                Found = 1;
            }
            else
            {
                printf(", %d", i);
            }
        }
    }

    if (!Found)
    {
        printf("NOT FOUND");
    }

    printf("\n");
    return 0;
}
