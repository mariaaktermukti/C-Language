#include<stdio.h>
int main()
{
    int no1,no2;
    printf("Enter two number :");
    scanf("%d %d",&no1,&no2);

    int choice;
    printf("Enter your choice\n 1. for addition\n 2. for subtraction\n 3. for multiplication\n 4. for division\n ");
    scanf("%d",&choice);

    int result;
    switch(choice)
    {
    case 1:
        result=no1+no2;
        printf(" Addition : %d\n",result);
        break;
    case 2:
        result=no1-no2;
        printf(" Subtraction : %d\n",result);
        break;
    case 3:
        result=no1*no2;
        printf(" Multiplication :%d\n",result);
        break;
    case 4:
        result=no1/no2;
        printf(" Division : %d\n",result);
        break;
    default:
        printf("Invalid choice. Please enter a number between 1 and 4.\n");
        break;

    }
    return 0;
}
