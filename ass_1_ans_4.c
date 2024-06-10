#include<stdio.h>
int main()
{
    char category;
    int years_of_work_experience,number_of_family_members;
    float total_family_income_per_month;

    printf("Enter the three categories of employees (X,Y,Z):");
    scanf("%c",&category);

    printf("Enter the years of work experience : ");
    scanf("%d",&years_of_work_experience);

    printf("Enter the number of family members: ");
    scanf("%d", &number_of_family_members);

    printf("Enter the total family income per month: ");
    scanf("%f", &total_family_income_per_month);

    int eligible_for_bonus = 0;

    if ((years_of_work_experience >= 12 && number_of_family_members > 5) ||
            (total_family_income_per_month < 1000.50)){
                eligible_for_bonus = 1;
            }
    
    else if ((category == 'Y' || category == 'Z') &&
             number_of_family_members > 8 &&
             total_family_income_per_month < 1100.78)
    {
        eligible_for_bonus = 1;
    }
    else if (category == 'X' && number_of_family_members > 5)
    {
        eligible_for_bonus = 1;
    }

    else if (eligible_for_bonus)
    {
        printf("Will Receive the Bonus\n");
    }
    else
    {
        printf("Will Not Receive the Bonus\n");
    }

    return 0;
}


