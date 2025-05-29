#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    double employeeNum,WorkingTime,perHourSalary,Salary,extrasell,Bonas,TotalSalary;
    char name[50];

    cout<<"Enter employee number(1st) and name(2nd) :";
    cin>>employeeNum ; cin>>name;

    cout<<"Enter working time(Hour) :";
    cin>>WorkingTime;

    cout<<"Money per Hour :";
    cin>>perHourSalary;

    cout<<"Enter extra sell's in taka :";
    cin>>extrasell;

    Bonas = (extrasell * 15 ) / 100 ;

    Salary = WorkingTime * perHourSalary ;
    cout<<"Main salary of " <<employeeNum<< " number or employee "<<name<<" :"<<Salary <<endl;
    cout<<"Extra bonas :"<<Bonas<<endl;

    TotalSalary = Bonas + Salary;
    cout<<"Total Salary :"<< TotalSalary;


    getch();
}
