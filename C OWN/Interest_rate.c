#include<stdio.h>
int main()
{
    double loan_amount,interest_rate,number_of_year,total_amount,monthly_amount;

    printf("Enter the loan amount :");
    scanf("%lf" , &loan_amount);

    printf("Enter the interest rate :");
    scanf("%lf" , &interest_rate);
    printf("Enter the number of year :");
    scanf("%lf" , &number_of_year);

    total_amount = loan_amount + (loan_amount * (interest_rate/100) * number_of_year);
    monthly_amount = total_amount / (number_of_year * 12) ;

    printf("Payment of monthly amount :%.2lf\n" , monthly_amount);
    printf("Total amount :%.3lf\n" , total_amount);



    getch();
}
