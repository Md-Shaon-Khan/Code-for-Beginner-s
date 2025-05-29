#include<stdio.h>
int main()
{
    char name[20];
    float main_salary,product_sold,total_salary;

    gets(name);
    scanf("%f",&main_salary);
    scanf("%f",&product_sold);
    
    total_salary = main_salary + (.15*product_sold);

    printf("\nTOTAL =R$ %.2f",total_salary);

    return 0;
}