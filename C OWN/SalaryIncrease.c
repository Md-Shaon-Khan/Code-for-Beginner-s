#include<stdio.h>

int main()
{
    double salary,New_salary,Money_earned,In_percentage;


    printf("Enter Your salary :");
    scanf("%lf" , &salary);

    if(salary>0 && salary<=400)
    {
        In_percentage = 15 ;
        Money_earned = (salary*15)/100 ;
        New_salary = salary + Money_earned ;

        printf("Your salary was :%.2lf\n" , salary);
        printf("Increase rate in percentage :%.1lf  \n" , In_percentage);
        printf("Money earned :%.2lf\n" , Money_earned);
        printf("Your new salary :%.2lf\n" , New_salary);



    }
    else if(salary>400 && salary<=800)
    {
        In_percentage = 12 ;
        Money_earned = (salary*12)/100 ;
        New_salary = salary + Money_earned ;

        printf("Your salary was :%.2lf\n" , salary);
        printf("Increase rate in percentage :%.1lf  \n" , In_percentage);
        printf("Money earned :%.2lf\n" , Money_earned);
        printf("Your new salary :%.2lf\n" , New_salary);



    }
    else if(salary>800 && salary<=1200)
    {
        In_percentage = 10 ;
        Money_earned = (salary*10)/100 ;
        New_salary = salary + Money_earned ;

        printf("Your salary was :%.2lf\n" , salary);
        printf("Increase rate in percentage :%.1lf  \n" , In_percentage);
        printf("Money earned :%.2lf\n" , Money_earned);
        printf("Your new salary :%.2lf\n" , New_salary);



    }
    else if(salary>1200 && salary<=2000)
    {
        In_percentage = 7 ;
        Money_earned = (salary*7)/100 ;
        New_salary = salary + Money_earned ;

        printf("Your salary was :%.2lf\n" , salary);
        printf("Increase rate in percentage :%.1lf  \n" , In_percentage);
        printf("Money earned :%.2lf\n" , Money_earned);
        printf("Your new salary :%.2lf\n" , New_salary);



    }
    else
    {
        In_percentage = 4 ;
        Money_earned = (salary*4)/100 ;
        New_salary = salary + Money_earned ;

        printf("Your salary was :%.2lf\n" , salary);
        printf("Increase rate in percentage :%.1lf  \n" , In_percentage);
        printf("Money earned :%.2lf\n" , Money_earned);
        printf("Your new salary :%.2lf\n" , New_salary);

    }



    getch();
}
