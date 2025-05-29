//If the expression results true then the first value before the colon (:) is assigned to the variable num1 else the second value is assigned to the num1.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1 ,num2 ;
    num1 =77;

    num2=(num1==10) ? 100 : 200;
    cout<<"num2 :"<<num2<<endl;

    num2=(num1==77) ? 100 : 200;
    cout<<"num2 : "<<num2;

    getch();
}
