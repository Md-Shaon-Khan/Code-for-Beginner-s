#include<iostream>
#include<conio.h>

using namespace std;
int main()
{

    int Hour,MPH,Salary;
    int employeeNUM ;

    cout<<"Enter the employee number :";
    cin>>employeeNUM;

    cout<<"Enter working time(hour) that employee did :";
    cin>>Hour;

    cout<<"Money per hour :";
    cin>>MPH;

    Salary = Hour * MPH;

    cout<<"Salary of "<< employeeNUM <<" number employee :"<<Salary;

    getch();
}
