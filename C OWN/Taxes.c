#include<stdio.h>
int main()
{
    float Salary,tax;

    printf("Enter your Salary :");
    scanf("%f" , &Salary);

    if(Salary>= 0 && Salary<=2000)
    {
        printf("Without taxes.\nYour income is so low.");
    }
    else if(Salary > 2000 && Salary <= 3000)
    {
        tax = (Salary - 2000)*.08;
        printf("R$ = %.2lf" , tax);
    }
    else if(Salary > 3000 && Salary <= 4500)
    {
        tax = (Salary - 3000)*.18 + (1000*.08);
        printf("R$ = %.2lf" , tax);
    }
    else if(Salary > 4500)
    {
        tax = (Salary - 4500)*.28 + (1500*.18) + (1000*.08);
        printf("R$ = %.2lf" , tax);
    }







    getch();
}
