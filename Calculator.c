#include<stdio.h>
int main()
{
    int number1,number2;
    char operator;
    printf("Enter [number1] [operator(+,-,*,/)] [number2] :");
    scanf("%d %c %d",&number1,&operator,&number2);
    int result;
    switch(operator)
    {
    case '+':
        result= number1+number2;
        break;

    case '-':
        result= number1-number2;
        break;

    case '*':
        result= number1*number2;
        break;

    case '/':
        result= number1/number2;
        break;

        default:
    {
        printf("Invalid operator\n");
    }

    }
    printf("%d",result);
    return 0;
}
