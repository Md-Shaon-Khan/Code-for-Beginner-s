#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1=240,num2=40;



    cout<<"int num1 = 240"<<endl;
    cout<<"int num2 = 40"<<endl;

    cout<<endl;

    num2 = num1;
    cout<<"=output :"<<num2<<endl;

    cout<<endl;

    //num2=num2+num1;
    num2 += num1;
    cout<<"+=output :"<<num2<<endl;

    cout<<endl;

    //num2=num2-num1;
    num2 -= num1;
    cout<<"-=output :"<<num2<<endl;

    cout<<endl;

    //num2=num2*num1;
    num2 *= num1;
    cout<<"*=output :"<<num2<<endl;

    cout<<endl;

    //num2=num2/num1;
    num2 /= num1;
    cout<<"/=output :"<<num2<<endl;

    cout<<endl;

    //num2=num2%num1;
    num2 %= num1;
    cout<<"%=output :"<<num2<<endl;

    cout<<endl;


    getch();
}
