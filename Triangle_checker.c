#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("Enter three angle :");
    scanf("%d %d %d",&angle1,&angle2,&angle3);
    int sum=0;
    if (angle1 > 0 && angle1 < 180 &&
            angle2 > 0 && angle2 < 180 &&
            angle3 > 0 && angle3 < 180)
    {
        if(angle1+angle2+angle3==180)
        {
            printf("Yes\n");
        }

        else
        {
            printf("No\n");
        }
    }


    return 0;

}
