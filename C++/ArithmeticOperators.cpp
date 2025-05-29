#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;

    cout<< "Enter two digits :";
    cin>>num1>>num2;



    int sum = num1+num2;
    cout<<"num1 + num2 :"<<sum<<endl;

    int sub = num1 - num2;
    cout<<"num1 - num2 :"<<sub<<endl;

    int mul = num1 * num2 ;
    cout<<"num1 * num2 :"<<mul<<endl;

    int div =num1 / num2 ;
    cout<<"num1 / num2 :"<<div<<endl;

    int mod = num1 % num2 ;
    cout<<"num1 % num2 :"<< mod<<endl;




    getch();
}
