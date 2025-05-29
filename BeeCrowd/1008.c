#include<stdio.h>
int main()
{
    int employee_number,hours_number_month;
    float salary,salary_per_hour;
   
    scanf("%d",&employee_number);
    scanf("%d",&hours_number_month);
    scanf("%f",&salary_per_hour);
   
    salary = (hours_number_month * salary_per_hour);

    printf("NUMBER = %d",employee_number);
    printf("\nSALARY = U$ %.2f",salary);

    return 0;
}