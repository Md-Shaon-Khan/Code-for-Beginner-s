#include<stdio.h>
int main()
{
    int id,WorkingHour,SalaryPerHour;

    printf("Input the employees ID(Max. 10 chars) :");
    scanf("%d",&id);

    printf("\nInput the working hrs :");
    scanf("%d",&WorkingHour);
    printf("Salary amount :");
    scanf("%d",&SalaryPerHour);

    printf("\nEmployee ID = %d",id);
    printf("\nSalary = U$ %d",WorkingHour*SalaryPerHour);












    return 0;
}
